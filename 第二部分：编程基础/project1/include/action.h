#include <iostream>
#include <string>
using namespace std;

void start();
class Robot
{
    public:
    
    void apply(int value, string unit, string order) {
        cout << "机器人" << order << "了：" << value << " " << unit << '\n';
    }
};

class Action {
public:
    string name;
    int value;
    string unit;
    Robot robot;
    Action(string name, int value, string unit) : name(name), value(value), unit(unit){};

    void work(string name, int value, string unit) {
        cout << "执行动作：" << name <<' '<< value <<' '<< unit << '\n';
        robot.apply(value, unit, name);
    }
};