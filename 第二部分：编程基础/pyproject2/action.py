"""动作体系与机器人控制。

Python 版，对应 C++ 版的 include/action.h + src/action.cpp：
    Robot   -> 对应 class Robot
    Action  -> 对应 class Action
    Ahead   -> 对应 class ahead（前进）
    Rotate  -> 对应 class rotate（旋转）
    Wave    -> 对应 class wave（挥手）
    System  -> 对应 class System
    start() -> 对应全局函数 void start()
"""


class Robot:
    """执行器：真正"做动作"的那一层。"""

    def apply(self, value: int, unit: str, order: str) -> None:
        print(f"机器人{order}了：{value} {unit}")


class Action:
    """动作基类：保存动作名、数值、单位，并持有执行它的机器人。"""

    def __init__(self, name: str, value: int, unit: str) -> None:
        self.name = name
        self.value = value
        self.unit = unit
        self.robot = Robot()

    def work(self, name: str, value: int, unit: str) -> None:
        # 与 C++ 版保持同一签名。注意：这三个参数其实都可以从 self 取到，
        # 更地道的 Python 写法是 work(self) 直接读 self.name / self.value / self.unit。
        print(f"执行动作：{name} {value} {unit}")
        self.robot.apply(value, unit, name)


class Ahead(Action):
    """前进：单位 cm。"""

    def __init__(self, value: int) -> None:
        super().__init__("前进", value, "cm")


class Rotate(Action):
    """旋转：单位 度。"""

    def __init__(self, value: int) -> None:
        super().__init__("旋转", value, "度")


class Wave(Action):
    """挥手：单位 次。"""

    def __init__(self, value: int) -> None:
        super().__init__("挥手", value, "次")


def _read_int(prompt: str) -> int:
    """读入一个整数。

    C++ 版用 cin >> value，输入非数字时流会进入失败状态，value 保持未初始化，
    容易得到莫名其妙的结果。这里显式处理：非整数按 0 处理并提示。
    """
    try:
        return int(input(prompt).strip())
    except ValueError:
        print("输入不是整数，按 0 处理")
        return 0


class System:
    """菜单驱动的主循环。"""

    def start(self) -> None:
        while True:
            print("pliease choose order\n1.forward\n2.rotate\n3.wave")

            try:
                raw = input()
            except EOFError:
                # 对应 C++ 版读到文件结尾的情形：直接退出，避免死循环
                print("exit")
                break

            try:
                order = int(raw.strip())
            except ValueError:
                print("invalid order")
                continue

            if order == 1:
                value = _read_int("please input forward distance(cm):")
                ahead = Ahead(value)
                ahead.work(ahead.name, ahead.value, ahead.unit)
            elif order == 2:
                value = _read_int("please input rotate angle(degree):")
                rotate = Rotate(value)
                rotate.work(rotate.name, rotate.value, rotate.unit)
            elif order == 3:
                value = _read_int("please input wave times:")
                wave = Wave(value)
                wave.work(wave.name, wave.value, wave.unit)
            elif order == 0:
                print("exit")
                break
            else:
                print("invalid order")


def start() -> None:
    """对应 C++ 的全局函数 void start()。"""
    System().start()


if __name__ == "__main__":
    start()
