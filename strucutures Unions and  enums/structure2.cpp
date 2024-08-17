#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

class Circle {
public:
    int radius;
    Point center;
};

int main() {
    Circle c;
    c.radius = 9;
    c.center.x = 0;
    c.center.y = 0;

    cout << "Radius: " << c.radius << ", Center: (" << c.center.x << ", " << c.center.y << ")";

    return 0;
}