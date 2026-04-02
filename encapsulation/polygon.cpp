#include "polygon.hpp"

void Polygon::addVertex(const Point& p) { vertices_.push_back(p); }

int Polygon::vertexCount() const { return static_cast<int>(vertices_.size()); }

const std::vector<Point>& Polygon::vertices() const { return vertices_; }
