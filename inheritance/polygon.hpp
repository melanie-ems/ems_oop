#ifndef INHERITANCE_POLYGON_HPP
#define INHERITANCE_POLYGON_HPP

#include <string>

class Polygon {
 public:
  virtual ~Polygon() = default;

  virtual std::string name() const = 0;
  virtual double area() const = 0;
  virtual double perimeter() const = 0;
};

#endif
