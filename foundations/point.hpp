#ifndef POINT_HPP
#define POINT_HPP

class Point {
 private:
  float x_;
  float y_;

 public:
  Point(float xInitial, float yInitial);

  float x() const;
  float y() const;
};

#endif