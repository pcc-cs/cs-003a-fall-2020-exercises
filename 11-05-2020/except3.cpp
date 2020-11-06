#include <cstdio>

class Default {
 public:
  // Note the "virtual" keyword to enable polymorphism
  virtual const char *message() {
    return "unknown error";
  }
};

class DivByZero : public Default {
 public:
  const char *message() {
    return "division by zero";
  }
};

double div(int a, int b) {
  if (b == 0) {
    // Throwing the derived class instance
    throw DivByZero();
  }
  // Note the double(a), without that it would be an integer division
  return double(a) / b;
}

int main() {
  int a, b;
  printf("a, b: ");
  scanf("%d, %d", &a, &b);

  try {
    printf("%d / %d = %.1lf\n", a, b, div(a, b));
  } catch (Default &d) {
    // Exception is caught as base class even though derived class is thrown
    fprintf(stderr, "Error: %s\n", d.message());
  }
}