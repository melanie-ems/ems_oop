#include "triangle.hpp"

#include <cmath>

namespace {
double distance(const Point& p1, const Point& p2) {
  const double dx = p1.x() - p2.x();
  const double dy = p1.y() - p2.y();
  return std::sqrt(dx * dx + dy * dy);
}
}  // namespace

Triangle::Triangle(const Point& a, const Point& b, const Point& c)
    : a_(a), b_(b), c_(c) {}

std::string Triangle::name() const { return "Triangle"; }

double Triangle::area() const {
  const double signedTwiceArea = a_.x() * (b_.y() - c_.y()) +
                                 b_.x() * (c_.y() - a_.y()) +
                                 c_.x() * (a_.y() - b_.y());
  return std::abs(signedTwiceArea) / 2.0;
}

double Triangle::perimeter() const {
  return distance(a_, b_) + distance(b_, c_) + distance(c_, a_);
}
