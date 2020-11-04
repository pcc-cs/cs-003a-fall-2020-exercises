#include <cstdio>
#include <vector>

#define SIZE(a) (sizeof(a) / sizeof(a[0]))

/**
 * Animal now becomes an "abstract" class
 * Virtual functions make this "polymorphic" in the sense that
 * different derived classes behave differently
 */
class Animal {
 private:
  double _weight;

 public:
  Animal(double weight) : _weight(weight) {
  }
  virtual const char *name() {
    return "Animal";
  }
  // "Pure virtual" function, makes the class "abstract"
  virtual const char *sound() = 0;
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

// Polymorphism in play, and sound() is not even implemented
// in the "Animal" class, this function has no idea what to expect for sound()
void dump1(Animal &a) {
  printf("%s: weight %.1lf, sound '%s'\n", a.name(), a.weight(), a.sound());
}

// Alternative way to make polymorphism work
void dump2(Animal *ap) {
  printf("%s: weight %.1lf, sound '%s'\n", ap->name(), ap->weight(), ap->sound());
}

int main() {
  // Cannot instantiate Animal with say:
  // Animal a(10);
  // because Animal is virtual

  Cat c1(3.2);
  Dog d1(5.1);
  Alsatian a1(6.2);

  dump1(c1); dump1(d1); dump1(a1);
  printf("\n");
  dump2(&c1); dump2(&d1); dump2(&a1);
  printf("\n");
  std::vector<Animal *>av = {&c1, &d1, &a1};
  for (Animal *ap : av) {
    dump2(ap);
  }
}