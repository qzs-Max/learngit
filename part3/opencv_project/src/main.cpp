#include<opencv2/opencv.hpp>
#include<iostream>
using namespace std;
using namespace cv;

int main() {
    cv::Mat image = cv::imread("../assets/p1.jpg");
    if (image.empty()) {
        cout << "无法读取图像文件" << endl;
        return -1;
    }
    cout <<"read success" << endl;
    cout <<"kuan: " << image.cols << endl;
    cout <<"gao: " << image.rows << endl;
    cout <<"通道数: " << image.channels() << endl;

    cv::Mat gray;
    cv::cvtColor(image, gray, cv::COLOR_BGR2GRAY);

    cv::Rect rect(100, 100, 200, 200);
    cv::Mat roi = image(rect);

    cv::Mat vis = image.clone();
    cv::rectangle(vis, rect, cv::Scalar(0, 0, 255), 3);


    cv::imshow("red = ROI", vis);
    cv::imshow("roi", roi);
    cv::imshow("gray", gray);
    cv::imshow("color", image);
    cv::waitKey(0);
    cv::destroyAllWindows();

    cv::imwrite("../output/roi.jpg", roi);
    cv::imwrite("../output/gray.jpg", gray);
}
    