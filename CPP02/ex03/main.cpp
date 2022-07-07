#include <iostream>
#include <ostream>

#include "Point.hpp"

void drawTriangle1(void) {}

int main(void) {
  Point a(0, 0);
  Point b(0, 1);
  Point c(1, 0);
  Point c1(0, 1);
  Point p1(0.2, 0.2);

  std::cout << std::endl
            << "********************************************" << std::endl
            << "Example 1 : not a triangle (0,0) (0,1) (0,1)" << std::endl
            << "********************************************" << std::endl
            << std::endl;
  std::cout << (bsp(a, b, c1, p1) ? "True" : "False") << std::endl << std::endl;

  std::cout << "**************************************" << std::endl
            << "Example 2 : triangle (0,0) (0,1) (1,0)" << std::endl
            << "**************************************" << std::endl;

  std::cout << std::endl << "P(0.2, 0.2) => Inside" << std::endl << std::endl;
  std::cout << "            |" << std::endl
            << "            |" << std::endl
            << "            *" << std::endl
            << "            **" << std::endl
            << "            * *" << std::endl
            << "            *  *" << std::endl
            << "            *   *" << std::endl
            << "            * P  *" << std::endl
            << "------------*******-----" << std::endl
            << "            |" << std::endl
            << "            |" << std::endl
            << "            |" << std::endl;
  std::cout << (bsp(a, b, c, p1) ? "True" : "False") << std::endl;
  std::cout << std::endl
            << ".........................................." << std::endl
            << std::endl
            << "P(-0.5, -0.5) => Outside" << std::endl
            << std::endl;

  Point p2(-0.5, -0.5);
  std::cout << "            |" << std::endl
            << "            |" << std::endl
            << "            *" << std::endl
            << "            **" << std::endl
            << "            * *" << std::endl
            << "            *  *" << std::endl
            << "            *   *" << std::endl
            << "            *    *" << std::endl
            << "------------*******-----" << std::endl
            << "            |" << std::endl
            << "            |" << std::endl
            << "         P  |" << std::endl
            << "            |" << std::endl
            << "            |" << std::endl;
  std::cout << (bsp(a, b, c, p2) ? "True" : "False") << std::endl;

  std::cout << std::endl
            << ".........................................." << std::endl
            << std::endl
            << "P(0, 0.5) => on a side of the triangle" << std::endl;
  std::cout << "            |" << std::endl
            << "            |" << std::endl
            << "            *" << std::endl
            << "            **" << std::endl
            << "            * *" << std::endl
            << "            P  *" << std::endl
            << "            *   *" << std::endl
            << "            *    *" << std::endl
            << "------------*******-----" << std::endl
            << "            |" << std::endl
            << "            |" << std::endl
            << "            |" << std::endl;
  Point p41(0, 0.5);
  std::cout << (bsp(a, b, c, p41) ? "True" : "False") << std::endl;
  std::cout << std::endl
            << ".........................................." << std::endl
            << std::endl
            << "P(1, 0) => on a corner of the triangle" << std::endl;
  std::cout << "            |" << std::endl
            << "            |" << std::endl
            << "            *" << std::endl
            << "            **" << std::endl
            << "            * *" << std::endl
            << "            *  *" << std::endl
            << "            *   *" << std::endl
            << "            *    *" << std::endl
            << "------------******P-----" << std::endl
            << "            |" << std::endl
            << "            |" << std::endl
            << "            |" << std::endl;
  Point p6(1, 0);
  std::cout << (bsp(a, b, c, p6) ? "True" : "False") << std::endl;

  std::cout << std::endl
            << "*********************************************" << std::endl
            << "Example 3 : triangle (-1,-1) (0,1) (0.4,-0.2)" << std::endl
            << "*********************************************" << std::endl;
  Point a1(-1, -1);
  Point b1(0.1, 1);
  Point c2(0.4, -0.2);
  std::cout << std::endl
            << ".........................................." << std::endl
            << std::endl
            << "P(0, 0) => inside" << std::endl
            << std::endl;
  std::cout << "            |" << std::endl
            << "            |" << std::endl
            << "            *" << std::endl
            << "            |" << std::endl
            << "            |*" << std::endl
            << "          * |  " << std::endl
            << "            |  *" << std::endl
            << "------------P------------" << std::endl
            << "         *  |    *" << std::endl
            << "            |  *" << std::endl
            << "        *   |*" << std::endl
            << "          * |" << std::endl
            << "       *    |" << std::endl
            << "            |" << std::endl
            << "            |" << std::endl;
  Point p7(0, 0);
  std::cout << (bsp(a1, b1, c2, p7) ? "True" : "False") << std::endl;

  std::cout << std::endl
            << ".........................................." << std::endl
            << std::endl
            << "P(-1, 1) => outside" << std::endl
            << std::endl;
  std::cout << "            |" << std::endl
            << "            |" << std::endl
            << "       P    *" << std::endl
            << "            |" << std::endl
            << "            |*" << std::endl
            << "          * |  " << std::endl
            << "            |  *" << std::endl
            << "-------------------------" << std::endl
            << "         *  |    *" << std::endl
            << "            |  *" << std::endl
            << "        *   |*" << std::endl
            << "          * |" << std::endl
            << "       *    |" << std::endl
            << "            |" << std::endl
            << "            |" << std::endl;
  Point p8(-1, 1);
  std::cout << (bsp(a1, b1, c2, p8) ? "True" : "False") << std::endl
            << std::endl;

  return 0;
}