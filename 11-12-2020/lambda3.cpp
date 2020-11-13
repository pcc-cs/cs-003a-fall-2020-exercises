#include <iostream>

int main() {
  int a = 100;
  auto msg = []() {
    return "a = ";
  };
  // Prints 100, NOT 200!
  auto print = [a, msg]() {
    std::cout << msg() << a << std::endl;
  };
  a = 200;
  print();
}