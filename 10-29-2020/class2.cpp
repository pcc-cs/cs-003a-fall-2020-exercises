#include <cstdio>

#define SIZE(a) (sizeof(a) / sizeof(a[0]))

class Animal {
 private:
  double _weight;

 public:
  Animal(double weight) : _weight(weight) {
  }
  // Virtual function provides "polymorhpism"
  virtual const char *name() {
    return "Animal";
  }
  // Only definition, inherited by ALL derived classes (any level)
  double weight() {
    return _weight;
  }
};

/**
 * Inherits weight() from Animal, but NOT _weight
 */
class Cat : public Animal {
 public:
  Cat(double weight) : Animal(weight) {
  }
  // Cat "overrides" name()
  const char *name() {
    return "Cat";
  }
  // Cat "redefines" sound()
  const char *sound() {
    return "Meow";
  }
};

class Dog : public Animal {
 public:
  Dog(double weight) : Animal(weight) {
  }
  // Dog "overrides" name()
  const char *name() {
    return "Dog";
  }
  // Dog "redefines" sound()
  const char *sound() {
    return "Bark";
  }
};

class Alsatian : public Dog  {
 public:
  Alsatian(double weight) : Dog(weight) {
  }
  // Alsatian "overrides" name()
  const char *name() {
    return "Alsatian";
  }
  // Alsatian "redefines" sound()
  const char *sound() {
    return "Growl";
  }
};

// Polymorphism not used because new Animal instance is created by copy
void dump1(Animal a) {
  printf("%s: weight %.1lf\n", a.name(), a.weight());
}

// Polymophism in play because the same "Animal" instance behaves
// differently depending on what the derived class is
void dump2(Animal &a) {
  printf("%s: weight %.1lf\n", a.name(), a.weight());
}

int main() {
  Cat c1(3.2);
  Dog d1(5.1);
  Alsatian a1(6.2);

  dump1(c1); dump1(d1); dump1(a1);
  printf("\n");
  dump2(c1); dump2(d1); dump2(a1);
}