# 机器人动作系统（Python 版）

这是同目录 `C++project1` 的 Python 移植版本，行为、输出、菜单流程与 C++ 版一致，
用来对照学习两种语言的写法差异。

## 运行

```bash
cd pyproject2
python3 main.py
```

菜单输入：

```
pliease choose order
1.forward
2.rotate
3.wave
```

输入 `1` → 再输入距离（cm）；`2` → 角度（度）；`3` → 次数；`0` → 退出。

## 文件对应关系

| Python | C++ | 内容 |
|---|---|---|
| `action.py` | `include/action.h` + `src/action.cpp` | `Robot`、`Action`、三个子类、`System`、`start()` |
| `main.py` | `app/main.cpp` | 程序入口 |

Python 没有"头文件"这个概念，声明和实现都写在同一个 `.py` 里，所以 C++ 的两个文件合并成了一个。

## 关键差异对照

**1. 类的声明与实现**

```cpp
// C++：类定义里写声明，成员函数可以另写实现
class Robot {
public:
    void apply(int value, string unit, string order);
};
```

```python
# Python：方法直接连函数体一起写，没有声明/实现分离
class Robot:
    def apply(self, value: int, unit: str, order: str) -> None:
        print(f"机器人{order}了：{value} {unit}")
```

**2. 继承与构造**

```cpp
class ahead : public Action {
public:
    ahead(int value) : Action("前进", value, "cm") {}
};
```

```python
class Ahead(Action):
    def __init__(self, value: int) -> None:
        super().__init__("前进", value, "cm")
```

C++ 用初始化列表 `: Action(...)` 调父类构造；Python 用 `super().__init__(...)` 显式调用。
C++ 里公有继承要写 `public Action`，Python 的 `class Ahead(Action)` 默认就是公有继承。

**3. 类型标注是可选的**

`value: int`、`-> None` 这些是**类型提示**，Python 运行时不会强制检查，
写错类型照样能跑（但 IDE 和 mypy 会警告）。C++ 里 `int value` 是硬约束，编译期就卡住。

**4. 成员变量的初始化**

```cpp
Action(string name, int value, string unit) : name(name), value(value), unit(unit) {}
```

```python
def __init__(self, name, value, unit):
    self.name = name
    self.value = value
    self.unit = unit
```

C++ 成员必须在类里先声明；Python 是在 `__init__` 里赋值时"长出来"的，
忘记赋值的话访问 `self.xxx` 会抛 `AttributeError`。

**5. 字符串格式化**

```cpp
cout << "执行动作：" << name << ' ' << value << ' ' << unit << '\n';
```

```python
print(f"执行动作：{name} {value} {unit}")
```

`f"..."` 里可以直接写变量名和表达式，不用一串 `<<` 拼接。

**6. 输入**

```cpp
int order;
cin >> order;
```

```python
order = int(input().strip())
```

`cin >>` 遇到非数字会静默失败，`order` 保持未初始化（C++ 版这种情况下可能陷入循环）；
Python 的 `int()` 会抛 `ValueError`，所以这里用 `try/except` 接住并提示 `invalid order`。

## 与 C++ 版的两处差异（有意为之）

1. **输入健壮性**：C++ 版输入非数字时 `cin` 失败、`order` 未初始化，程序行为不确定；
   Python 版统一按 `invalid order` 处理并继续。
2. **EOF 处理**：C++ 版读到输入结束会一直循环；Python 版捕获 `EOFError` 后打印 `exit` 退出。

## 可以改进的地方

`Action.work(self, name, value, unit)` 这三个参数其实都能从 `self` 拿到，
C++ 版那样写是为了演示"传参"，更地道的 Python 写法是：

```python
def work(self) -> None:
    print(f"执行动作：{self.name} {self.value} {self.unit}")
    self.robot.apply(self.value, self.unit, self.name)
```

调用处也随之简化为 `ahead.work()`。
