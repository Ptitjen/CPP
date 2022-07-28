#include <cstddef>
#include <cstdlib>
#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**) {
  std::cout << "Array copy:" << std::endl;
  Array<int> numbers(MAX_VAL);
  int* mirror = new int[MAX_VAL];
  srand(time(NULL));
  for (int i = 0; i < MAX_VAL; i++) {
    const int value = rand();
    numbers[i] = value;
    mirror[i] = value;
  }
  {
    Array<int> tmp = numbers;
    Array<int> test(tmp);
  }
  for (int i = 0; i < MAX_VAL; i++) {
    if (mirror[i] != numbers[i]) {
      std::cerr << "didn't save the same value!!" << std::endl;
      return 1;
    }
  }
  std::cout << "Copy didn't affect the original array." << std::endl;
  std::cout << std::endl << "Index operator:" << std::endl;
  try {
    numbers[2] = 0;
  } catch (const std::exception& e) {
    std::cerr << "Error with index 2" << std::endl;
  }
  try {
    numbers[-2] = 0;
  } catch (const std::exception& e) {
    std::cerr << "Error with index -2" << std::endl;
  }
  try {
    numbers[MAX_VAL - 1] = 0;
  } catch (const std::exception& e) {
    std::cerr << "Error with index MAX - 1" << std::endl;
  }
  try {
    numbers[MAX_VAL] = 0;
  } catch (const std::exception& e) {
    std::cerr << "Error with index MAX" << std::endl;
  }

  for (int i = 0; i < MAX_VAL; i++) {
    numbers[i] = rand();
  }
  delete[] mirror;

  std::cout << std::endl << "Array of size 5: " << std::endl;
  {
    Array<int> array(5);
    for (std::size_t i = 0; i < array.size(); i++)
      array[i] = 42;

    std::cout << "size: " << array.size() << std::endl;
    for (std::size_t i = 0; i < array.size(); i++)
      std::cout << array[i] << std::endl;
  }

  std::cout << std::endl << "Empty array: " << std::endl;
  {
    Array<int> empty_array;
    std::cout << "size: " << empty_array.size() << std::endl;
  }

  return 0;
}