#include <iostream>
#include "iter.hpp"

class Awesome {
 public:
  Awesome(void) : _n(42) {}
  int get(void) const { return this->_n; }

 private:
  int _n;
};

std::ostream& operator<<(std::ostream& o, Awesome const& rhs) {
  o << rhs.get();
  return o;
}

template <typename T>
void print(T const& x) {
  std::cout << x << std::endl;
}

int main() {
  {
    std::cout << "Int tab:" << std::endl;
    int tab[] = {0, 1, 2, 3, 4};
    Awesome tab2[5];
    iter(tab, 5, print);
    std::cout << "Awesome tab:" << std::endl;
    iter(tab2, 5, print);
  }
  {
    std::cout << std::endl << "String tab:" << std::endl;
    std::string tab[] = {"Unicorn", "Zombicorn", "Brocolicorn"};
    iter(tab, 3, print);
  }
  {
    std::cout << std::endl << "Double tab:" << std::endl;
    double tab[] = {1.5, 5.6, 42.42};
    iter(tab, 3, print);
  }
  return 0;
}
