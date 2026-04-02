#ifndef ENCAPSULATION_POLYGON_HPP
#define ENCAPSULATION_POLYGON_HPP

#include <vector>

#include "point.hpp"

class Polygon {
 private:
  std::vector<Point> vertices_;

 public:
  void addVertex(const Point& p);
  int vertexCount() const;
  const std::vector<Point>& vertices() const;
};

#endif
