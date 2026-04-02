#include "point.hpp"

Point::Point(float xInitial, float yInitial) : x_(xInitial), y_(yInitial) {}

float Point::x() const { return x_; }

float Point::y() const { return y_; }
