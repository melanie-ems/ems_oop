#ifndef INHERITANCE_TRIANGLE_HPP
#define INHERITANCE_TRIANGLE_HPP

#include <string>

#include "point.hpp"
#include "polygon.hpp"

class Triangle : public Polygon {
 private:
  Point a_;
  Point b_;
  Point c_;

 public:
  Triangle(const Point& a, const Point& b, const Point& c);

  std::string name() const override;
  double area() const override;
  double perimeter() const override;
};

#endif
