#include <cstdio>

// Must have the () to enclose the expression!
#define SIZE(a) (sizeof(a) / sizeof(a[0]))

class Point {
 private:
  double _x, _y;

 // If you define any constructor, the system default constructor goes away
 public:
  // We need the "default" constructor to accommodate the new in Space
  Point() {
  }
  Point(double x, double y) : _x(x), _y(y) {
  }
  ~Point() {
    printf("~Point()\n");
  }
};

int main() {
  /**
   * Stack: points variable
   * Heap: Array of 3 points pointed to by points
   * You are responsible for deleting it!
   */
  Point *points = new Point[3];

  /**
   * Explcitly delete memory created with new.
   * Otherwise, there would be a memory leak.
   */
  delete [] points;
  
  /**
   * Prints the below output on exit, note that it is in reverse
   * because the elements are created on the stack (LIFO):
   * The lines are from destruction of points array on the heap
   ~Point()
   ~Point()
   ~Point()
  */
}