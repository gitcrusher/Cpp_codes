#include <iostream>
using namespace std;

void updateValue(float& num) {
    num += 514.24;
}

int main() {
    float number = 5.0;
    updateValue(number);
    cout << number;
    return 0;
}