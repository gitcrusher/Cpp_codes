#include <iostream>
using namespace std;

class MyClass {
public:
    inline void displayMessage() {
        cout << "Hello, World!";
    }
};

int main() {
    MyClass obj;
    obj.displayMessage();
    return 0;
}