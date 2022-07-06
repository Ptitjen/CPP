#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed {
 public:
  Fixed();
  Fixed(int const n);
  Fixed(float const f);
  Fixed(Fixed const& f);
  Fixed& operator=(Fixed const& f);
  ~Fixed();

  int getRawBits(void) const;
  void setRawBits(int const raw);

  float toFloat(void) const;
  int toInt(void) const;

  int fractionnal;

 private:
  int value;
  static int const bits = 8;
};
std::ostream& operator<<(std::ostream& os, Fixed const& f);
#endif