#include <iostream>
#include <string>
using namespace std;

struct Person {
    string name;
    int age;
};

class Employee {
public:
    string name;
    int id;
};

int main() {
    Person p;
    p.name = "John";
    p.age = 25;

    cout << "Person: " << p.name << ", " << p.age << " years old" << endl;

    Employee e;
    e.name = "Alice";
    e.id = 1001;

    cout << "Employee: " << e.name << ", ID: " << e.id ;

    return 0;
}