#include <iostream>
using namespace std;

void increment(int num) {
    ++num;
    cout << "Inside increment: " << num << endl;
}

int main() {
    int value = 5;
    increment(value);
    cout << "Inside main: " << value << endl;
    return 0;
}