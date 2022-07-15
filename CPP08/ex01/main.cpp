#include <algorithm>
#include <exception>
#include <iostream>
#include <list>
#include <map>
#include <string>
#include <vector>
#include "Span.hpp"

Span generateRandomNumbers(unsigned int n) {
  Span s(n);
  for (unsigned int i = 0; i < n; i++)
    s.array.push_back(std::rand());
  return s;
}

int main() {
  srand(time(NULL));

  try {
    // main from exercise
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

    // 1.operator []
    //  {
    //    Span sp = Span(5);
    //    sp.addNumber(6);
    //    std::cout << sp[0] << std::endl;
    //    std::cout << sp[-1] << std::endl;
    //     std::cout << sp[1] << std::endl;
    //     std::cout << sp[5] << std::endl;

    // 2.function on too short array
    //    std::cout << sp.shortestSpan() << std::endl;
    //    std::cout << sp.longestSpan() << std::endl;
    // }

    // 3.function on array without value
    //  {
    //    Span sp = Span(5);

    //    std::cout << sp.shortestSpan() << std::endl;
    //    std::cout << sp.longestSpan() << std::endl;
    // }

    // 4.empty array
    //  {
    //    Span sp = Span(0);
    //    sp.addNumber(6);
    //    std::cout << sp.shortestSpan() << std::endl;
    //    std::cout << sp.longestSpan() << std::endl;
    //  }

    // 5.multiple add numbers
    // {
    //   Span s(20000);
    //   s.multipleAddNumbers(generateRandomNumbers(20000));
    //   std::cout << s.longestSpan() << std::endl;
    //   std::cout << s.shortestSpan() << std::endl;
    // }
    // 6. Error multiple add number : not enough space
    // {
    //   Span s(20000);
    //   s.addNumber(1);
    //   s.multipleAddNumbers(generateRandomNumbers(20000));
    //   std::cout << s.longestSpan() << std::endl;
    //   std::cout << s.shortestSpan() << std::endl;
    // }
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  return 0;
};
