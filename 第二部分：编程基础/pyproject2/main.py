"""程序入口，对应 C++ 版的 app/main.cpp。

C++ 版：
    #include "action.h"
    int main() { start(); return 0; }

Python 版的 import 就相当于 C++ 的 #include，
if __name__ == "__main__" 是"只有直接运行时才执行"的惯用写法。
"""

from action import start

if __name__ == "__main__":
    start()
