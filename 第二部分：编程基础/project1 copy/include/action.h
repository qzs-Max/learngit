#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

namespace robot {

// 机器人位姿：动作执行时被协作修改，体现对象间协作而非各自为政
struct Pose {
    double x_cm = 0.0;
    double heading_deg = 0.0;
};

// 100.0 -> "100"，100.5 -> "100.5"
inline std::string formatNumber(double value) {
    std::ostringstream os;
    os << std::fixed << std::setprecision(2) << value;
    std::string text = os.str();
    if (text.find('.') != std::string::npos) {
        text.erase(text.find_last_not_of('0') + 1);
        if (!text.empty() && text.back() == '.') text.pop_back();
    }
    return text;
}

class Action {
public:
    // virtual ~Action() = default;
    // Action(const Action&) = delete;
    // Action& operator=(const Action&) = delete;

    // 统一执行接口（非虚）：输出格式在基类固定，子类只提供素材
    void execute(Pose& pose) const {
        std::cout << "执行动作：" << name() << ' ' << parameterText() << ' '
                  << apply(pose) << '\n';
    }

    virtual std::string name() const = 0;
    std::string summary() const { return name() + " " + parameterText(); }

protected:
    Action() = default;
    virtual std::string parameterText() const = 0;  // "前进距离：100 cm"
    virtual std::string apply(Pose& pose) const = 0; // 执行并返回结果描述
};

} // namespace robot
