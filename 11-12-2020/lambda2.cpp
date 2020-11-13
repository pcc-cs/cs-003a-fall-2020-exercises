#include <iostream>

int main() {
  int a = 100, b = 200;

  // Assign to variable, deprecated (better to create a function)
  auto swap = [](int *ap, int *bp) {
    int c = *ap;
    *ap = *bp;
    *bp = c;
  };
  swap(&a, &b);
  std::cout << a << ", " << b << std::endl;

  // Completely anonymous, not recommended!
  [](int *ap, int *bp) {
    int c = *ap;
    *ap = *bp;
    *bp = c;
  }(&a, &b);
  std::cout << a << ", " << b << std::endl;
}