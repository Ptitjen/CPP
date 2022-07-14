#include <algorithm>
#include <exception>
#include <iostream>
#include <list>
#include <map>
#include <vector>

template <typename T>
void easyfind(T t, int n) {
  typename T::iterator p = std::find(t.begin(), t.end(), n);
  if (p != t.end())
    std::cout << "Element '" << n << "' found at index " << *p << "."
              << std::endl;
  else {
    std::cout << "Element '" << n << "' not found." << std::endl;
    throw std::exception();
  }
};

int main(void) {
  {
    std::list<int> lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    try {
      std::cout << "Array : 1 2 3" << std::endl;
      {
        std::cout << "Searching '1': ";
        easyfind(lst, 1);
      }
    } catch (std::exception& e) {
    }
  }
  {
    std::list<int> lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    try {
      std::cout << "Array : 1 2 3" << std::endl;
      {
        std::cout << "Searching '4': ";
        easyfind(lst, 4);
      }
    } catch (std::exception& e) {
    }
  }
  {
    std::list<int> lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    try {
      std::cout << "Array : 1 2 3" << std::endl;
      {
        std::cout << "Searching '2': ";
        easyfind(lst, 2);
      }

    } catch (std::exception& e) {
    }
  }
  return (0);
}
