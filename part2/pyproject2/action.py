class Robot:

    def apply(self, value: int, unit: str, order: str):
        print(f"机器人{order}了：{value} {unit}")


class Action:

    def __init__(self, name: str, value: int, unit: str) -> None:
        self.name = name
        self.value = value
        self.unit = unit
        self.robot = Robot()

    def work(self, name: str, value: int, unit: str):
        print(f"执行动作：{name} {value} {unit}")
        self.robot.apply(value, unit, name)


class Ahead(Action):
    """前进：单位 cm"""

    def __init__(self, value: int) -> None:
        super().__init__("前进", value, "cm")


class Rotate(Action):
    """旋转：单位 度"""

    def __init__(self, value: int) -> None:
        super().__init__("旋转", value, "度")


class Wave(Action):
    """挥手：单位 次"""

    def __init__(self, value: int) -> None:
        super().__init__("挥手", value, "次")

class System:

    def start(self) -> None:
        while True:
            print("pliease choose order\n1.forward\n2.rotate\n3.wave")
            order = input("please input order:")
            if order == "1":
                value = input("please input forward distance(cm):")
                ahead = Ahead(value)
                ahead.work(ahead.name, ahead.value, ahead.unit)
            elif order == "2":
                value = input("please input rotate angle(degree):")
                rotate = Rotate(value)
                rotate.work(rotate.name, rotate.value, rotate.unit)
            elif order == "3":
                value = input("please input wave times:")
                wave = Wave(value)
                wave.work(wave.name, wave.value, wave.unit)
            elif order == "0":
                print("exit")
                break
            else:
                print("invalid order")


def start() -> None:
    """对应 C++ 的全局函数 void start()。"""
    System().start()


if __name__ == "__main__":
    start()
