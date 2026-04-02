#ifndef INHERITANCE_RECTANGLE_HPP
#define INHERITANCE_RECTANGLE_HPP

#include <string>

#include "polygon.hpp"

class Rectangle : public Polygon {
 private:
  double width_;
  double height_;

 public:
  Rectangle(double width, double height);

  std::string name() const override;
  double area() const override;
  double perimeter() const override;
};

#endif
