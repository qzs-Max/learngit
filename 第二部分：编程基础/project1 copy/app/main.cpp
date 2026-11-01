#include <exception>
#include <iostream>
#include "robot.h"

int main() {
    using robot::ActionType;
    using robot::Robot;
    using robot::TurnDirection;

    try {
        Robot robot;   // 机器人已启动

        robot.add(ActionType::Move, 100.0)
             .add(ActionType::Rotate, 90.0, TurnDirection::Left)
             .add(ActionType::Wave, 3);

        robot.run();

        std::cout << "所有动作执行完毕\n";
    } catch (const std::exception& ex) {
        std::cerr << "动作执行失败：" << ex.what() << '\n';
        return EXIT_FAILURE;
    }
    return 0;
}
