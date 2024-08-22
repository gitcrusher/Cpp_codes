#include <iostream>
using namespace std;

class MyClass {
public:
    int data;

    void setData(int d) {
        data = d;
    }
    friend void addToData(MyClass& obj, int value);
};

void addToData(MyClass& obj, int value) {
    obj.data += value;
}

int main() {
    MyClass obj1;
    obj1.setData(20);
    addToData(obj1, 5);
    cout << obj1.data;
    return 0;
}