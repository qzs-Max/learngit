#include<iostream>
#include"rclcpp/rclcpp.hpp"
#include"inspection_interfaces/msg/inspection_status.hpp"
using namespace std;
using namespace inspection_interfaces::msg;

class Moniter : public rclcpp::Node {
    public:
    Moniter() : Node("moniter") {
        subscription_ = this->create_subscription<inspection_interfaces::msg::InspectionStatus>(
            "inspection_status", 10, std::bind(&Moniter::status_callback, this, std::placeholders::_1)
        );
    }

    void status_callback(const inspection_interfaces::msg::InspectionStatus::SharedPtr msg) {
        cout << "机器人名称: " << msg->name << endl;
        cout << "位置坐标: (" << msg->location_x << ", " << msg->location_y << ")" << endl;
        cout << "速度: " << msg->v << endl;
        cout << "电量: " << msg->battery << "%" << endl;
        cout << "状态: " << msg->status << endl;
        cout << "------------------------" << endl;
    }

    rclcpp::Subscription<inspection_interfaces::msg::InspectionStatus>::SharedPtr subscription_;
};
int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Moniter>());
    rclcpp::shutdown();
    return 0;
}
