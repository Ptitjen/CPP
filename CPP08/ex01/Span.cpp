#include "Span.hpp"
#include <map>

Span::Span() : maxLength(0){};

Span::Span(unsigned int N) : maxLength(N){};

Span::Span(Span const& s) {
  maxLength = s.maxLength;
  array.clear();
  array = s.array;
};

Span& Span::operator=(Span const& s) {
  if (&s == this)
    return (*this);
  array.clear();
  array = s.array;
  maxLength = s.maxLength;
  return (*this);
};

int const& Span::operator[](int const index) const {
  if (index >= static_cast<int>(maxLength) || index < 0)
    throw std::out_of_range("Out of range");
  return array.at(index);
};

int& Span::operator[](int index) {
  if (index >= static_cast<int>(maxLength) || index < 0)
    throw std::out_of_range("Out of range");
  return array.at(index);
};

Span::~Span(){};

void Span::addNumber(int n) {
  if (array.size() < maxLength)
    array.push_back(n);
  else
    throw std::out_of_range("Error: AddNumber: Max size reached");
};

unsigned int Span::shortestSpan() {
  unsigned int diff = longestSpan();
  if (array.empty()) {
    std::cout << "Error: ShortestSpan: Array is empty." << std::endl;
    return 0;
  }
  unsigned int tmp = 0;
  for (unsigned int i = 0; i < array.size() - 1; i++) {
    for (unsigned int j = i + 1; j < array.size(); j++) {
      if (array.at(i) == array.at(j))
        return (0);
      array.at(i) > array.at(j) ? tmp = array.at(i) - array.at(j)
                                : tmp = array.at(j) - array.at(i);
      if (tmp < diff)
        diff = tmp;
    }
  }
  return (diff);
};

unsigned int Span::longestSpan() {
  if (array.empty()) {
    std::cout << "Error: LongestSpan: Array is empty." << std::endl;
    return 0;
  }
  return (*std::max_element(array.begin(), array.end()) -
          *std::min_element(array.begin(), array.end()));
};