#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <exception>

#include <iostream>
#include <stdexcept>

template <typename T>

class Array {
 public:
  T* array;
  std::size_t len;

  Array() : len(0) { array = new T[0]; };

  Array(unsigned int n) : len(n) {
    array = new T[n];
    for (std::size_t i = 0; i < n; ++i) {
      array[i] = T();
    }
  };

  Array(Array<T> const& f) {
    array = new T[f.len];
    this->len = f.len;
    for (std::size_t i = 0; i < this->len; i++)
      array[i] = T(f[i]);
  };

  Array<T>& operator=(Array<T> const& f) {
    if (&f == this)
      return (*this);
    delete[] array;
    array = new T[f.size()];
    for (std::size_t i = 0; i < f.len; i++)
      array[i] = T(f[i]);
    this->len = f.len;
    return (*this);
  };

  T const& operator[](std::size_t const index) const {
    if (index >= len)
      throw std::exception();
    return array[index];
  };

  T& operator[](std::size_t index) {
    if (index >= len)
      throw std::exception();
    return array[index];
  };

  ~Array<T>() { delete[](array); };

  std::size_t size(void) { return (len); };

  class InvalidIndex : public std::exception {
   public:
    virtual const char* what() const throw();
  };
};

#endif
