#include "actions.h"
#include <stdexcept>

namespace robot {

// ---------- MoveAction ----------
MoveAction::MoveAction(double distance_cm) { setDistance(distance_cm); }

void MoveAction::setDistance(double distance_cm) {
    if (!(distance_cm > 0.0)) throw std::invalid_argument("前进距离必须为正数");
    distance_cm_ = distance_cm;
}

std::string MoveAction::name() const { return "前进"; }

std::string MoveAction::parameterText() const {
    return "前进距离：" + formatNumber(distance_cm_) + " cm";
}

std::string MoveAction::apply(Pose& pose) const {
    pose.x_cm += distance_cm_;
    return "机器人向前移动了 " + formatNumber(distance_cm_) + " cm";
}

// ---------- RotateAction ----------
RotateAction::RotateAction(double angle_deg, TurnDirection dir) : dir_(dir) {
    setAngle(angle_deg);
}

void RotateAction::setAngle(double angle_deg) {
    if (!(angle_deg > 0.0)) throw std::invalid_argument("旋转角度必须为正数");
    angle_deg_ = angle_deg;
}

void RotateAction::setDirection(TurnDirection dir) noexcept { dir_ = dir; }

std::string RotateAction::name() const { return "旋转"; }

std::string RotateAction::parameterText() const {
    return "旋转角度：" + formatNumber(angle_deg_) + "°";
}

std::string RotateAction::apply(Pose& pose) const {
    const bool left = (dir_ == TurnDirection::Left);
    pose.heading_deg += left ? angle_deg_ : -angle_deg_;
    return std::string("机器人向") + (left ? "左" : "右") +
           "旋转了 " + formatNumber(angle_deg_) + "°";
}

// ---------- WaveAction ----------
WaveAction::WaveAction(int times) { setTimes(times); }

void WaveAction::setTimes(int times) {
    if (times <= 0) throw std::invalid_argument("挥手次数必须为正整数");
    times_ = times;
}

std::string WaveAction::name() const { return "挥手"; }

std::string WaveAction::parameterText() const {
    return "挥手次数：" + std::to_string(times_);
}

std::string WaveAction::apply(Pose&) const {  // 挥手不改变位姿
    return "机器人完成了 " + std::to_string(times_) + " 次挥手";
}

} // namespace robot
