#include <cstdio>

double div(double a, double b) {
  if (b == 0) {
    throw "Can't divide by 0!";
  }
  return a/b;
}

int main() {
  double a, b;
  printf("a, b: ");
  scanf("%lf, %lf", &a, &b);

  // "Catch" the exception "thrown" by div()
  try {
    printf("%.1lf / %.1lf = %.1lf\n", a, b, div(a, b));
  } catch (const char *err) {
    fprintf(stderr, "Error: %s\n", err);
  }
}