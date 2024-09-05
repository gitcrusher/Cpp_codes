#include <iostream>
using namespace std;

void setToTen(int* p) {
    *p = 10;
}

void setToTwenty(int& r) {
    r = 20;
}

int main() {
    int value = 5;
    cout << "Initial value: " << value << endl;

    int* p = &value;
    *p = 7;
    cout << "After modifying with pointer: " << value << endl;

    int& r = value;
    r = 9;
    cout << "After modifying with reference: " << value << endl;

    setToTen(&value);
    cout << "After modifying with pointer as argument: " << value << endl;

    setToTwenty(value);
    cout << "After modifying with reference as argument: " << value;
}