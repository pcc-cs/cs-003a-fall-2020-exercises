#include <cstdio>
#include <string>
#include "swap.h"

int main() {
  int a = 100, b = 200;
  std::string x = "foo", y = "bar";
  char c = 'a', d = 'b';

  printf("a = %d, b = %d\n", a, b);
  swap(&a, &b);
  printf("a = %d, b = %d\n", a, b);

  printf("\n");

  printf("x = %s, y = %s\n", x.c_str(), y.c_str());
  swap(&x, &y);
  printf("x = %s, y = %s\n", x.c_str(), y.c_str());

  printf("\n");

  printf("c = %c, d = %c\n", c, d);
  swap(&c, &d);
  printf("c = %c, d = %c\n", c, d);
}