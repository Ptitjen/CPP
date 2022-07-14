#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <iostream>
#include <vector>

class Span {
 public:
  Span();
  Span(unsigned int N);
  Span(Span const& s);
  Span& operator=(Span const& s);
  int const& operator[](int index) const;
  int& operator[](int index);
  ~Span();

  std::vector<int> array;
  unsigned int maxLength;

  void addNumber(int n);
  unsigned int shortestSpan();
  unsigned int longestSpan();
};

#endif
