#include <string>
#include <iostream>
#include <random>

int main() {
  // std::string is a class, heavyweight and not for large arrays
  std::string a;
  for (int i = 0; i < 1e9; i++) {
    a += 'a' + rand() % 26;
  }
  std::cout << a << std::endl;
}
