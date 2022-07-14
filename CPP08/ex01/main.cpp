#include <algorithm>
#include <exception>
#include <iostream>
#include <list>
#include <map>
#include <vector>
#include "Span.hpp"

int main() {
  try {
    {
      Span sp = Span(5);
      sp.addNumber(6);
      sp.addNumber(3);
      sp.addNumber(17);
      sp.addNumber(9);
      sp.addNumber(11);
      std::cout << sp.shortestSpan() << std::endl;
      std::cout << sp.longestSpan() << std::endl;
    }
    {
      Span sp = Span(5);
      sp.addNumber(6);
      std::cout << sp.shortestSpan() << std::endl;
      std::cout << sp.longestSpan() << std::endl;
    }
    {
      Span sp = Span(5);

      std::cout << sp.shortestSpan() << std::endl;
      std::cout << sp.longestSpan() << std::endl;
    }
    {
      Span sp = Span(0);
      sp.addNumber(6);
      std::cout << sp.shortestSpan() << std::endl;
      std::cout << sp.longestSpan() << std::endl;
    }
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  return 0;
};

// TO DO : better add number