#include<iostream>
#include"rclcpp/rclcpp.hpp"
#include<chrono>
#include<memory>
#include<functional>
#include"inspection_interfaces/msg/inspection_status.hpp"


using namespace std;
using namespace inspection_interfaces::msg;

class Robot : public rclcpp::Node {
    public:
    Robot() : Node("robot1") {
        publisher_ = this->create_publisher<inspection_interfaces::msg::InspectionStatus>("inspection_status", 10);
        timer_ = this->create_wall_timer(
            std::chrono::seconds(1),
            std::bind(&Robot::publish_status, this)
        );
    }


    void publish_status() {
        if (!inistialized) {
            name = "robot1";
            location_x = 0.0;
            location_y = 0.0;
            v = 0.54;
            battery = 100;
            inistialized = true;
        }
        else if (battery > 0) {
            status = "moving";
            location_x += 0.5; 
            location_y += 0.2; 
            battery -= 1; }
        if (battery == 0){
            status = "stopping";
            v=0.0;
        };
        
        
        auto message = inspection_interfaces::msg::InspectionStatus();
        message.name = name;
        message.location_x = location_x;
        message.location_y = location_y;
        message.v = v;
        message.battery = battery;
        message.status = status;

        publisher_->publish(message);
    }

    string name;
    double location_x;
    double location_y;
    double v;
    int battery;
    string status;
    bool inistialized = false;  

    rclcpp::Publisher<InspectionStatus>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};
int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Robot>());
    rclcpp::shutdown();
    return 0;
}
