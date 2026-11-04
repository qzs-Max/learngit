#include<opencv2/opencv.hpp>
#include<iostream>
using namespace std;
using namespace cv;

struct LightBar
{
    RotatedRect lb;
    float width=0;
    float height=0;
    float k=0;
    float area=0;
    float angle=0;
    Point2f rect;
};



int main() {
    Mat img = imread("../assets/p2.jpg");
    if (img.empty()) {
        cout << "无法读取图像文件" << endl;
        return -1;
    }
    cout << "read success" << endl;

    Mat hsv,mask;
    cv::cvtColor(img, hsv, COLOR_BGR2HSV);
    cv::Scalar lower_blue(0, 0, 210);
    cv::Scalar upper_blue(255, 40, 255);
    cv::inRange(hsv, lower_blue, upper_blue, mask);

    imshow("img", img);
    imshow("mask", mask);

    // waitKey(0);

    std::vector<std::vector<Point>> contours;
    std::vector<LightBar> lightbars;
    cv::findContours(mask, contours, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);

    Mat img_cp = img.clone();
    for (size_t i = 0; i < contours.size(); i++) {
        if (cv::contourArea(contours[i]) < 10) continue; 
        if(cv::contourArea(contours[i]) > 800) continue;
        cv::RotatedRect box = cv::minAreaRect(contours[i]);

        cv::Point2f vertices[4];
        box.points(vertices);
        float width = box.size.width;
        float height = box.size.height;
        float k = height / width;
        if (k > 12) continue;
        if (k < 4) continue;

        for (int j = 0; j < 4; j++) {
            cv::line(img, vertices[j], vertices[(j + 1) % 4], cv::Scalar(0, 0, 255), 2);
        }
        // cv::rectangle(img_cp, box.boundingRect(), cv::Scalar(0, 255, 0), 2);
        
        LightBar lb;
        lb.lb = box;
        lb.width = width;
        lb.height = height;
        lb.k = k;
        lb.area = cv::contourArea(contours[i]);
        lb.angle = box.angle;
        lb.rect = box.center;
        lightbars.push_back(lb);

    };

    for (size_t i = 0; i < lightbars.size(); i++) {
        LightBar lb = lightbars[i];
        int n = 0;
        for(size_t j = i + 1; j < lightbars.size(); j++) {
            LightBar lb2 = lightbars[j];
            float angle_diff = abs(lb.angle - lb2.angle);
            if (angle_diff > 10) continue;
            float k_diff = abs(lb.k - lb2.k);
            if (k_diff > 1) continue;
            float area_diff = abs(lb.area - lb2.area);
            if (area_diff > 100) continue;
            float center_dist = norm(lb.rect - lb2.rect);
            if (center_dist > 200) continue;

            cv::line(img, lb.rect, lb2.rect, cv::Scalar(255, 0, 0), 2);
            cv::Rect2d rect = lb.lb.boundingRect() | lb2.lb.boundingRect();
            cv::rectangle(img, rect, cv::Scalar(0, 255, 0), 2);
            n+=1;
        }
        cout <<"Armor detected: "<< n << endl;
    }
    imshow("img", img);
    // imshow("img_cp", img_cp);
    cv::waitKey(0);
    
    // cv::imwrite("../assets/p2_result.jpg", mask);
    // cv::imwrite("../assets/p2_diff.jpg", img_cp);





    return 0;

}