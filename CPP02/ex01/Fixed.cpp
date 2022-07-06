#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
  std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(int const n) {
  std::cout << "Int constructor called" << std::endl;
  this->setRawBits(n << bits);
};

Fixed::Fixed(float const f) {
  std::cout << "Float constructor called" << std::endl;
  this->setRawBits(roundf(f * (1 << bits)));
};

Fixed::Fixed(Fixed const& f) {
  std::cout << "Copy constructor called" << std::endl;
  this->setRawBits(f.getRawBits());
};

Fixed& Fixed::operator=(Fixed const& f) {
  std::cout << "Copy assignment operator called" << std::endl;
  this->setRawBits(f.getRawBits());
  return (*this);
};

Fixed::~Fixed() {
  std::cout << "Destructor called" << std::endl;
};

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