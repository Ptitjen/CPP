#include "Point.hpp"
#include <cmath>

Point::Point() : x(0), y(0){};

Point::Point(float f1, float f2) : x(f1), y(f2){};

Point::Point(Point const& p) {
  const_cast<Fixed&>(this->x) = p.x;
  const_cast<Fixed&>(this->y) = p.y;
};

Point& Point::operator=(Point const& p) {
  const_cast<Fixed&>(this->x) = p.x;
  const_cast<Fixed&>(this->y) = p.y;
  return (*this);
};

Fixed Point::getX() const {
  return (this->x);
};
Fixed Point::getY() const {
  return (this->y);
};

Point::~Point(){};

bool isATriangle(Point const a, Point const b, Point const c) {
  if ((a.getX().toFloat() == b.getX().toFloat() &&
       a.getY().toFloat() == b.getY().toFloat()) ||
      (b.getX().toFloat() == c.getX().toFloat() &&
       b.getY().toFloat() == c.getY().toFloat()) ||
      (c.getX().toFloat() == a.getX().toFloat() &&
       c.getY().toFloat() == a.getY().toFloat())) {
    std::cout << "Invalid coordinates." << std::endl;
    return false;
  }
  return (true);
}

bool onCorner(Point const a, Point const b, Point const c, Point const point) {
  if ((a.getX().toFloat() == point.getX().toFloat() &&
       a.getY().toFloat() == point.getY().toFloat()) ||
      (b.getX().toFloat() == point.getX().toFloat() &&
       b.getY().toFloat() == point.getY().toFloat()) ||
      (c.getX().toFloat() == point.getX().toFloat() &&
       c.getY().toFloat() == point.getY().toFloat())) {
    return (true);
  }
  return (false);
}

bool isOnLine(Point p1, Point p2, Point point) {
  float mab;
  if (p1.getX().toFloat() == p2.getX().toFloat()) {
    if (point.getX().toFloat() == p2.getX().toFloat())
      return true;
  }
  mab = (p1.getY().toFloat() - p2.getY().toFloat()) /
        (p1.getX().toFloat() - p2.getX().toFloat());
  float pab = p1.getY().toFloat() - mab * p1.getX().toFloat();
  return (point.getY().toFloat() - mab * point.getX().toFloat() - pab == 0);
}

bool onBorder(Point const a, Point const b, Point const c, Point const point) {
  if (isOnLine(a, b, point))
    return true;
  if (isOnLine(a, c, point))
    return true;
  if (isOnLine(b, c, point))
    return true;
  return false;
}

float getDistance(Point p1, Point p2) {
  return sqrt((p1.getX().toFloat() - p2.getX().toFloat()) *
                  (p1.getX().toFloat() - p2.getX().toFloat()) +
              (p1.getY().toFloat() - p2.getY().toFloat()) *
                  (p1.getY().toFloat() - p2.getY().toFloat()));
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
  if (!isATriangle(a, b, c))
    return false;

  if (onCorner(a, b, c, point))
    return false;

  if (onBorder(a, b, c, point))
    return false;

  // check point dans triangle
  float pa = getDistance(a, point);
  float pb = getDistance(b, point);
  float pc = getDistance(c, point);
  float ab = getDistance(a, b);
  float bc = getDistance(b, c);
  float ca = getDistance(a, c);
  float angleabp = acos((ab * ab - pa * pa - pb * pb) / (2 * pa * pb));
  float anglebpc = acos((bc * bc - pb * pb - pc * pc) / (2 * pc * pb));
  float angleapc = acos((ca * ca - pa * pa - pc * pc) / (2 * pa * pc));

  return (Fixed(angleabp + anglebpc + angleapc) ==
          Fixed(static_cast<float>(M_PI)));
};