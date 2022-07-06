#include "Point.hpp"

Point::Point() : x(0), y(0){};

Point::Point(float f1, float f2) : x(f1), y(f2){};

Point::Point(Point const& p) {
  this->x = p.x;
  this->y = p.y;
};

Point& Point::operator=(Point const& p) {
  this->x = p.x;
  this->y = p.y;
  return (*this);
};

Point::~Point(){};