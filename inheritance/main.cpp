#include <iomanip>
#include <iostream>
#include <memory>
#include <vector>

#include "point.hpp"
#include "polygon.hpp"
#include "rectangle.hpp"
#include "triangle.hpp"

int main() {
  std::vector<std::unique_ptr<Polygon>> polygons;

  polygons.push_back(std::make_unique<Rectangle>(5.0, 2.0));
  polygons.push_back(std::make_unique<Triangle>(
      Point(0.0, 0.0), Point(4.0, 0.0), Point(2.0, 3.0)));

  std::cout << "Inheritance and polymorphism module" << std::endl;

  for (const auto& polygon : polygons) {
    std::cout << polygon->name() << " -> area: " << std::fixed
              << std::setprecision(2) << polygon->area()
              << ", perimeter: " << polygon->perimeter() << std::endl;
  }

  return 0;
}
