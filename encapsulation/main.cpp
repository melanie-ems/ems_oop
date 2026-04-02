#include <iostream>

#include "point.hpp"
#include "polygon.hpp"

int main() {
  Polygon triangle;
  triangle.addVertex(Point(0.0, 0.0));
  triangle.addVertex(Point(4.0, 0.0));
  triangle.addVertex(Point(2.0, 3.0));

  std::cout << "Encapsulation module" << std::endl;
  std::cout << "Triangle has " << triangle.vertexCount()
            << " vertices:" << std::endl;

  for (const Point& p : triangle.vertices()) {
    std::cout << "(" << p.x() << ", " << p.y() << ")" << std::endl;
  }

  return 0;
}
