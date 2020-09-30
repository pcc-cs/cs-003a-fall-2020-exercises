/**
 * Color header, containing declarations.
 * This is the "header file."
 * 
 * Copyright (c) 2020, Sekhar Ravinutala.
 */

class Color {
 private:
  unsigned char _r, _g, _b;  // Note the underscore in names
  unsigned char _fix(unsigned char);  // Helper function

 // Member functions defined outside, separately
 public:
  // Constructor, parameter names are optional
  Color(unsigned char, unsigned char, unsigned char);

  // Mutators (AKA setters)
  void setR(unsigned char);
  void setG(unsigned char);
  void setB(unsigned char);

  // Utility, potentially for debugging
  void dump(const char *);

  // Operator overloading
  Color operator+(const Color &) const;
  bool operator==(const Color &) const;
};

 // Overloading
 unsigned char value(unsigned char, unsigned char, unsigned char);