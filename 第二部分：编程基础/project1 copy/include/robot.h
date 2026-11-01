#pragma once
#include <cstddef>
#include <memory>
#include <string>
#include <vector>
#include "action.h"
#include "actions.h"

namespace robot {

enum class ActionType { Move, Rotate, Wave };
const char* toString(ActionType type);

class Robot {
public:
    Robot();                       // 输出"机器人已启动"
    ~Robot();
    Robot(const Robot&) = delete;
    Robot& operator=(const Robot&) = delete;

    // 统一入口 1：动作类型 + 参数
    Robot& add(ActionType type, double value,
               TurnDirection dir = TurnDirection::Left);
    // 统一入口 2：动作名称 + 参数（便于配置/脚本驱动）
    Robot& add(const std::string& type_name, double value,
               TurnDirection dir = TurnDirection::Left);

    void run();                    // 唯一的控制流程，多态执行
    std::size_t pending() const noexcept { return actions_.size(); }
    const Pose& pose() const noexcept { return pose_; }

private:
    std::unique_ptr<Action> make(ActionType type, double value,
                                 TurnDirection dir) const;   // 工厂
    std::vector<std::unique_ptr<Action>> actions_;           // 组合 has-a
    Pose pose_;
};

} // namespace robot
