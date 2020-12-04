#include <iostream>

int main() {
  std::string msg;
  std::getline(std::cin, msg);
  std::cout << "Message: " << msg << std::endl;
}