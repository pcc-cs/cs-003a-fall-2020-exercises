/**
 * Main application that uses the Color class.
 * 
 * Copyright (c) 2020, Sekhar Ravinutala.
 */

#include <cstdio>
#include "color.h"

int main() {
  Color c1(0x10, 0x32, 0x4c);
  c1.dump("c1");  // (0x10, 0x32, 0x4c)

  // Increment each member value (prefix)
  printf("\n");
  Color c2 = ++c1;
  c1.dump("++c1");
  c2.dump("c2");

  // Increment each member value (postfix)
  printf("\n");
  Color c3 = c1++;
  c1.dump("c1++");
  c3.dump("c3");
}
