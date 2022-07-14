#include <iostream>

template <typename T>
void iter(T* array, int size, void(f)(T const& x)) {
  for (int i = 0; i < size; i++) {
    f(array[i]);
  }
}
template <typename T>
void iter(T* array, int size, void(f)(T x)) {
  for (int i = 0; i < size; i++) {
    f(array[i]);
  }
}
template <typename T>
void iter(T* array, int size, void(f)(T* x)) {
  for (int i = 0; i < size; i++) {
    f(array[i]);
  }
}
// sortir les templates dans un autre fichier

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
  int tab[] = {0, 1, 2, 3, 4};
  Awesome tab2[5];
  iter(tab, 5, print);
  iter(tab2, 5, print);
  return 0;
}
