#include <cstdio>
#include <iostream>
#include <vector>
#include <random>

void dump(std::vector<int> v) {
  for (int i = 0; i < v.size(); i++) {
    if (i > 0) {
      std::cout << " -> ";
    }
    std::cout << v[i];
  }
  std::cout << std::endl;
}

namespace {
  // Creates a new type that acts like unsigned int
  typedef unsigned int counter;
  typedef void (*vfunc)(std::vector<int>);
}

int main() {
  std::vector<int> v1;

  // Capacity increases by double
  for (counter i = 1; i <= 17; i++) {
    v1.push_back(rand() % 100);
    printf("%-5d%-5lu%-5lu\n", i, v1.size(), v1.capacity());
  }

  // Using custom type vfunc
  vfunc f = dump;
  f(v1);
}