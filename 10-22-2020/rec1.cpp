#include <cstdio>

unsigned long long fib1(unsigned int n) {
  // Repeats the same calculations over and over again
  // O(2^n) time complexity
  return n > 1 ? fib1(n - 1) + fib1(n - 2) : 1;
}

namespace {
  unsigned long long *cache;
}
void initFib2(unsigned int n) {
  cache = new unsigned long long[n + 1]();
  cache[0] = cache[1] = 1;
}
unsigned long long fib2(unsigned int n) {
  // Prevents repeat calculations, re-uses previous work
  // O(n) time complexity
  if (cache[n] == 0) {
    cache[n] = fib2(n - 1) + fib2(n - 2);
  }
  return cache[n];
}

int main() {
  // Get number for calculation
  unsigned int n;
  printf("n: ");
  scanf("%d", &n);

  // Naive approach
  for (int i = 0; i <= n; i++) {
    printf("fib1(%2d) = %llu\n", i, fib1(i));
  }

  // Using "memoization"
  initFib2(n);
  for (int i = 0; i <= n; i++) {
    printf("fib2(%2d) = %llu\n", i, fib2(i));
  }
}