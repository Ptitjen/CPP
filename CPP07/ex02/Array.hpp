#include <exception>

#include <iostream>
#include <stdexcept>

template <typename T>

class Array {
 public:
  T* array;
  Array() : len(0) { array = new T[0]; };

  Array(unsigned int n) : len(n) { array = new T[n]; };

  Array(Array<T> const& f) {
    array = new T[f.len];
    this->len = f.len;
    for (unsigned int i = 0; i < this->len; i++)
      array[i] = T(f[i]);
  };

  Array<T>& operator=(Array<T> const& f) {
    if (&f == this)
      return (*this);
    delete array;  // verifier
    array = new T[this->size()];
    for (unsigned int i = 0; i < this->size(); i++)
      array[i] = T(f[i]);
    this->len = f.len;
    return (*this);
  };

  T const& operator[](int const index) const {
    if (index >= static_cast<int>(len) || index < 0)
      throw std::out_of_range("Bli");
    return array[index];
  };

  T& operator[](int index) {
    if (index >= static_cast<int>(len) || index < 0)
      throw std::out_of_range("Bli");
    return array[index];
  };

  ~Array<T>() { delete (array); };

  unsigned int size(void) { return (len); };

  class InvalidIndex : public std::exception {
   public:
    virtual const char* what() const throw();
  };
  unsigned int len;
};
