#include "robot.h"
#include <cmath>
#include <iostream>
#include <stdexcept>
#include <unordered_map>

namespace robot {

const char* toString(ActionType type) {
    switch (type) {
        case ActionType::Move:   return "前进";
        case ActionType::Rotate: return "旋转";
        case ActionType::Wave:   return "挥手";
    }
    return "未知";
}

Robot::Robot() { std::cout << "机器人已启动\n"; }
Robot::~Robot() = default;

std::unique_ptr<Action> Robot::make(ActionType type, double value,
                                    TurnDirection dir) const {
    switch (type) {
        case ActionType::Move:
            return std::make_unique<MoveAction>(value);
        case ActionType::Rotate:
            return std::make_unique<RotateAction>(value, dir);
        case ActionType::Wave: {
            const long times = std::lround(value);
            if (std::fabs(value - static_cast<double>(times)) > 1e-9 || times <= 0)
                throw std::invalid_argument("挥手次数必须为正整数");
            return std::make_unique<WaveAction>(static_cast<int>(times));
        }
    }
    throw std::invalid_argument("未知动作类型");
}

Robot& Robot::add(ActionType type, double value, TurnDirection dir) {
    actions_.push_back(make(type, value, dir));
    return *this;
}

Robot& Robot::add(const std::string& type_name, double value, TurnDirection dir) {
    static const std::unordered_map<std::string, ActionType> table{
        {"前进", ActionType::Move},   {"move",   ActionType::Move},
        {"旋转", ActionType::Rotate}, {"rotate", ActionType::Rotate},
        {"挥手", ActionType::Wave},   {"wave",   ActionType::Wave},
    };
    const auto it = table.find(type_name);
    if (it == table.end())
        throw std::invalid_argument("未知动作名称：" + type_name);
    return add(it->second, value, dir);
}

void Robot::run() {
    if (actions_.empty()) {
        std::cout << "没有待执行的动作\n";
        return;
    }
    for (const auto& action : actions_) {
        action->execute(pose_);   // ← 全系统唯一的多态调用点
    }
    actions_.clear();
}

} // namespace robot
