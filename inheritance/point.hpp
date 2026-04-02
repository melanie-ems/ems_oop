#ifndef INHERITANCE_POINT_HPP
#define INHERITANCE_POINT_HPP

class Point {
 private:
  double x_;
  double y_;

 public:
  Point(double x = 0.0, double y = 0.0);

  double x() const;
  double y() const;
};

#endif
