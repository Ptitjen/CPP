
#include <sys/_types/_uintptr_t.h>
#include <iostream>

struct Data {
  Data(int a, std::string n);
  int age;
  std::string name;
};

Data::Data(int a, std::string n) : age(a), name(n){};

uintptr_t serialize(Data* ptr) {
  return reinterpret_cast<uintptr_t>(ptr);
};

Data* deserialize(uintptr_t raw) {
  return reinterpret_cast<Data*>(raw);
};

int main() {
  Data* data = new Data(28, "Bliblou");
  std::cout << &data << std::endl;
  std::cout << "d-age : " << data->age << std::endl;
  std::cout << "d-name : " << data->age << std::endl << std::endl;

  uintptr_t p = serialize(data);
  Data* data2 = deserialize(p);
  std::cout << &data2 << std::endl;
  std::cout << "d2-age : " << data2->age << std::endl;
  std::cout << "d2-name : " << data2->age << std::endl << std::endl;
  std::cout << &data << std::endl;
  std::cout << "d-age : " << data->age << std::endl;
  std::cout << "d-name : " << data->age << std::endl;

  delete (data);

  return 0;
}