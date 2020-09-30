/**
 * Color class, containing construct and member function definitions.
 * Notice the lack of main() in this.
 * This is the "source file."
 * 
 * Copyright (c) 2020, Sekhar Ravinutala.
 */

#include <cstdio>
#include "color.h"

// No need to sanitize because unsigned char is always "good"
Color::Color(unsigned char r, unsigned char g, unsigned char b) :
  _r(r), _g(g), _b(b) {
}

void Color::setR(unsigned char r) {
  _r = r;
}

void Color::setG(unsigned char g) {
  _g = g;
}

void Color::setB(unsigned char b) {
  _b = b;
}

void Color::dump(const char *name) {
  printf("%s: (0x%x, 0x%x, 0x%x)\n", name, _r, _g, _b);
}

// Operator overloading, note the const
Color Color::operator+(const Color &c) const {
  return Color(
    (_r + c._r) / 2,
    (_g + c._g) / 2,
    (_b + c._b) / 2
  );
}

// Equality operator, note the const
bool Color::operator==(const Color &c) const {
  return _r == c._r && _g == c._g && _b == c._b;
}

// Returns average of values
unsigned char value(unsigned char r, unsigned char g, unsigned char b) {
  return (r + g + b) / 3;
}
