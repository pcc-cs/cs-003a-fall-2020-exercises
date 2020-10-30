#include <cstdio>

class Animal {
 private:
  double _weight;

 protected:
  const char *_name;

 public:
  Animal(double weight) : _weight(weight), _name("Animal") {
  }
  // Only definition, inherited by ALL derived classes (any level)
  double weight() {
    return _weight;
  }
  const char *name() {
    return _name;
  }
};

/**
 * Inherits weight() from Animal, but NOT _weight
 */
class Cat : public Animal {
 public:
  Cat(double weight) : Animal(weight) {
    // Accessing the protected member of base class
    _name = "Cat";
  }
  // Cat defines sound()
  const char *sound() {
    return "Meow";
  }
};

class Dog : public Animal {
 public:
  Dog(double weight) : Animal(weight) {
    // Accessing the protected member of base class
    _name = "Dog";
  }
  // Dog defines sound()
  const char *sound() {
    return "Bark";
  }
};

class Alsatian : public Dog  {
 public:
  Alsatian(double weight) : Dog(weight) {
    // No name set, takes the name set by base class Dog
  }
  // Alsatian redefines sound() with its own implementation
  const char *sound() {
    return "Growl";
  }
};

int main() {
  Cat c1(3.2);
  Dog d1(5.1);
  Alsatian a1(6.2);

  printf("%s c1: weight %.1lf, sound %s\n", c1.name(), c1.weight(), c1.sound());
  printf("%s d1: weight %.1lf, sound %s\n", d1.name(), d1.weight(), d1.sound());
  printf("%s a1: weight %.1lf, sound %s\n", a1.name(), a1.weight(), a1.sound());
}