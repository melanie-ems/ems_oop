#include <iostream>
#include <string>
using namespace std;

class Point {
    private:
        float x;
        float y;

    public:
        // Constructor
        Point(float xInitial, float yInitial) {
            x = xInitial;
            y = yInitial;
        }

        // Getter methods (accessors)
        string x() {
            return x;
        }

        int y() {
            return y;
        }

};

int main() {
    Point p1(0.0, 0.0);
    Point p2(2.0, 3.0);

    dog.describe();

    return 0;
}
