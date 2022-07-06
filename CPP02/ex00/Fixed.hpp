#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
 public:
  Fixed();                           // Constructeur par défaut
  Fixed(Fixed const& f);             // Constructeur de recopie
  Fixed& operator=(Fixed const& f);  // Operator d'affectation
  ~Fixed();                          // Destructeur

  int getRawBits(void) const;
  void setRawBits(int const raw);

 private:
  int value;
  static int const bits = 8;
};

#endif