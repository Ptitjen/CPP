#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point {
 public:
  Point();
  Point(float f1, float f2);
  Point(Point const& p);
  Point& operator=(Point const& p);
  ~Point();

 private:
  Fixed const x;
  Fixed const y;
};

#endif