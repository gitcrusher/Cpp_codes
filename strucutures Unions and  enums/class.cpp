#include <iostream>
using namespace std;

union Data {
    int number;
};

class UnionExample {
public:
    void setNumber(int num) {
        data.number = num;
    }

    int getNumber() {
        return data.number;
    }

private:
    Data data;
};

int main() {
    UnionExample example;
    
    example.setNumber(42);
    cout << "Number: " << example.getNumber();

    return 0;
}