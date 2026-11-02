#include "action.h"
#include <iostream>
using namespace std;

class ahead : public Action {
public:
    ahead(int value) : Action("前进", value, "cm") {}
    // void work(string name, int value, string unit);
};

class rotate : public Action {
public:
    rotate(int value) : Action("旋转", value, "度") {}
    // void work(string name, int value, string unit);
};

class wave : public Action {
public:
    wave(int value) : Action("挥手", value, "次") {}
    // void work(string name, int value, string unit);
};

class System {
public:
    
    void start(){
        while (true)
        {
            cout << "pliease choose order"<<endl<< "1.forward"<<endl<< "2.rotate"<<endl<< "3.wave"<<endl;
            int order;
            cin >> order;
            if (order == 1) {
                int value;
                cout << "please input forward distance(cm):";
                cin >> value;
                ahead a(value);
                a.work(a.name, a.value, a.unit);
            } else if (order == 2) {
                int value;
                cout << "please input rotate angle(degree):";
                cin >> value;
                rotate r(value);
                r.work(r.name, r.value, r.unit);
            } else if (order == 3) {
                int value;
                cout << "please input wave times:";
                cin >> value;
                wave w(value);
                w.work(w.name, w.value, w.unit);
            }else if (order == 0) {
                cout << "exit" << endl;
                break;    
            } else {
                cout << "invalid order" << endl;
            }
        }
    }
};

void start() {
    System s;
    s.start();
}