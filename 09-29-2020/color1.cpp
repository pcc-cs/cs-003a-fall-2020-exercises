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
}
