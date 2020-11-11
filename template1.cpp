#include <cstdio>
#include <string>

// Only swaps int values
void intSwap(int *ap, int *bp) {
  int c = *ap;
  *ap = *bp;
  *bp = c;
}

// Only swaps std::string values
void stringSwap(std::string *ap, std::string *bp) {
  std::string c = *ap;
  *ap = *bp;
  *bp = c;
}

// Generic "template" function swaps any type
template <class T>
void swap(T *ap, T *bp) {
  T c = *ap;
  *ap = *bp;
  *bp = c;
}

int main() {
  int a = 100, b = 200;
  std::string x = "foo", y = "bar";

  printf("a = %d, b = %d\n", a, b);
  intSwap(&a, &b);
  printf("a = %d, b = %d\n", a, b);

  printf("\n");

  printf("x = %s, y = %s\n", x.c_str(), y.c_str());
  stringSwap(&x, &y);
  printf("x = %s, y = %s\n", x.c_str(), y.c_str());

  printf("\n");
  
  printf("a = %d, b = %d\n", a, b);
  swap(&a, &b);
  printf("a = %d, b = %d\n", a, b);

  printf("\n");

  printf("x = %s, y = %s\n", x.c_str(), y.c_str());
  swap(&x, &y);
  printf("x = %s, y = %s\n", x.c_str(), y.c_str());
}