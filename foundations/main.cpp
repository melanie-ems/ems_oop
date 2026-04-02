#include <iostream>

#include "point.hpp"

int main() {
  Point p1(0.0, 0.0);
  Point p2(2.0, 3.0);

  std::cout << "Point 1: (" << p1.x() << ", " << p1.y() << ")" << std::endl;
  std::cout << "Point 2: (" << p2.x() << ", " << p2.y() << ")" << std::endl;

  return 0;
}