#include <iostream>
using namespace std;

int calculatePower(int base, int exponent = 2) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
int main() {
    int base = 3;
    int power = 4;
    int result = calculatePower(base, power);
    cout << result;
    return 0;
}