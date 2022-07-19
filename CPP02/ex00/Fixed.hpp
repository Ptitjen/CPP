#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
 public:
  Fixed();
  Fixed(Fixed const& f);
  Fixed& operator=(Fixed const& f);
  ~Fixed();

  int getRawBits(void) const;
  void setRawBits(int const raw);

 private:
  int value;
  static int const bits = 8;
};

#endif