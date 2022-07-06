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

  bool operator>(Fixed const& f) const;
  bool operator<(Fixed const& f) const;
  bool operator>=(Fixed const& f) const;
  bool operator<=(Fixed const& f) const;
  bool operator==(Fixed const& f) const;
  bool operator!=(Fixed const& f) const;

  Fixed operator+(Fixed const& f) const;
  Fixed operator-(Fixed const& f) const;
  Fixed operator*(Fixed const& f) const;
  Fixed operator/(Fixed const& f) const;

  Fixed operator++(int i);
  Fixed operator--(int i);
  Fixed operator++();
  Fixed operator--();

  static Fixed min(Fixed& f1, Fixed& f2);
  static Fixed max(Fixed& f1, Fixed& f2);
  static Fixed min(const Fixed& f1, const Fixed& f2);
  static Fixed max(const Fixed& f1, const Fixed& f2);
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