#include "Span.hpp"
#include <exception>
#include <map>
#include <stdexcept>

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
    throw std::out_of_range("Error: index out of range");
  if (index >= static_cast<int>(array.size())) {
    throw std::out_of_range("Error: no value at this index");
  }
  return array.at(index);
};

int& Span::operator[](int index) {
  if (index >= static_cast<int>(maxLength) || index < 0)
    throw std::out_of_range("Error: index out of range");
  if (index >= static_cast<int>(array.size())) {
    throw std::out_of_range("Error: no value at this index");
  }
  return array.at(index);
};

Span::~Span(){};

void Span::addNumber(int n) {
  if (array.size() < maxLength)
    array.push_back(n);
  else
    throw std::out_of_range("Error: AddNumber: Max size reached");
};

void Span::multipleAddNumbers(Span toAdd) {
  if (toAdd.array.size() <= this->maxLength - this->array.size()) {
    std::vector<int>::iterator it;
    it = this->array.begin();
    it = this->array.insert(it, toAdd.array.begin(), toAdd.array.end());
  } else {
    throw std::length_error(
        "Error: Not enough space in array to add this range of numbers");
  }
}

unsigned int Span::shortestSpan() {
  unsigned int diff = longestSpan();
  if (array.empty()) {
    throw std::length_error("Error: Span: Array is empty.");
  }
  if (array.size() == 1) {
    throw std::length_error("Error: Span: Only one value in array.");
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
    throw std::length_error("Error: Span: Array is empty.");
  }
  if (array.size() == 1) {
    throw std::length_error("Error: Span: Only one value in array.");
  }
  return (*std::max_element(array.begin(), array.end()) -
          *std::min_element(array.begin(), array.end()));
};