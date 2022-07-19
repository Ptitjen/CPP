#include "Fixed.hpp"

Fixed::Fixed() : value(0){};

Fixed::Fixed(int const n) {
  this->setRawBits(n << bits);
};

Fixed::Fixed(float const f) {
  this->setRawBits(roundf(f * (1 << bits)));
};

Fixed::Fixed(Fixed const& f) {
  this->setRawBits(f.getRawBits());
};

Fixed& Fixed::operator=(Fixed const& f) {
  this->setRawBits(f.getRawBits());
  return (*this);
};

bool Fixed::operator>(Fixed const& f) const {
  return ((this->getRawBits() > f.getRawBits()));
};

bool Fixed::operator<(Fixed const& f) const {
  return ((this->getRawBits() < f.getRawBits()));
};

bool Fixed::operator>=(Fixed const& f) const {
  return ((this->getRawBits() >= f.getRawBits()));
};

bool Fixed::operator<=(Fixed const& f) const {
  return ((this->getRawBits() <= f.getRawBits()));
};

bool Fixed::operator==(Fixed const& f) const {
  return ((this->getRawBits() == f.getRawBits()));
};

bool Fixed::operator!=(Fixed const& f) const {
  return ((this->getRawBits() != f.getRawBits()));
};

Fixed Fixed::operator+(Fixed const& f) const {
  Fixed n = Fixed(toFloat() + f.toFloat());
  return (n);
};

Fixed Fixed::operator-(Fixed const& f) const {
  Fixed n = Fixed(toFloat() - f.toFloat());
  return (n);
};
Fixed Fixed::operator*(Fixed const& f) const {
  Fixed n = Fixed(toFloat() * f.toFloat());
  return (n);
};
Fixed Fixed::operator/(Fixed const& f) const {
  Fixed n = Fixed(toFloat() / f.toFloat());
  return (n);
};

Fixed Fixed::operator++(int) {
  Fixed n = *this;
  setRawBits(getRawBits() + 1);
  return (n);
};
Fixed Fixed::operator--(int) {
  Fixed n = *this;
  setRawBits(getRawBits() - 1);
  return (n);
};
Fixed Fixed::operator++() {
  setRawBits(getRawBits() + 1);
  return (*this);
};
Fixed Fixed::operator--() {
  setRawBits(getRawBits() - 1);
  return (*this);
};

Fixed Fixed::min(Fixed& f1, Fixed& f2) {
  return (f1.getRawBits() < f2.getRawBits() ? f1 : f2);
};
Fixed Fixed::max(Fixed& f1, Fixed& f2) {
  return (f1.getRawBits() > f2.getRawBits() ? f1 : f2);
};
Fixed Fixed::min(const Fixed& f1, const Fixed& f2) {
  return (f1.getRawBits() < f2.getRawBits() ? f1 : f2);
};
Fixed Fixed::max(const Fixed& f1, const Fixed& f2) {
  return (f1.getRawBits() > f2.getRawBits() ? f1 : f2);
};

Fixed::~Fixed(){};

int Fixed::getRawBits(void) const {
  return (this->value);
};

void Fixed::setRawBits(int const raw) {
  this->value = raw;
};

float Fixed::toFloat(void) const {
  return (static_cast<float>(this->getRawBits()) / (1 << bits));
};

int Fixed::toInt(void) const {
  return (this->getRawBits() >> bits);
};

std::ostream& operator<<(std::ostream& os, const Fixed& f) {
  std::cout << f.toFloat();
  return os;
}
