#include <iostream>
using namespace std;

inline void func1(int a, int b) {
    cout << "a=" << a << " and b=" << b << endl;
}

inline int func2(int x) {
    return x * x;
}

int main() {
    int temp;
    func1(1, 4);
    temp = func2(6);
    cout << "square val = " << temp;
    return 0;
};