#include <iostream>

/**
 * Declaration, without definition - will
 * compile, but needs to be "linked" with the defining
 * file (namespace3.cpp in this case).
 */
void inc();

// Namespace
namespace A {
  int x = 100;
  // Namespace nesting
  namespace C {
    int x = 300;
  }
}

// Another namespace with own x
namespace B {
  int x = 200;
}

// "Unnamed" namespace, prevents class with x in namespace3.cpp
namespace {
  int x = 400;
}

int main() {
  // Note the access of different x, all unrelated to each other
  std::cout << A::x << std::endl;
  std::cout << B::x << std::endl;
  std::cout << A::C::x << std::endl;

  std::cout << "x = " << x << std::endl;
  inc();
}
