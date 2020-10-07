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

class Space {
 private:
  Point *_points;

 public:
  // "Point points[]" is equivalent to "Point *points"
  Space(Point points[], int n) {
    _points = new Point[n];  // Creating n empty instances of Point
    for (int i = 0; i < n; i++) {
      _points[i] = points[i];  // Copy happens through memory copy
    }
  }
  ~Space() {
    printf("~Space()\n");
    delete [] _points;  // Note the [], very important!
  }
};

int main() {
  // Notice that we don't specify the size of the array
  Point points[] = {
    Point(-1.0, 2.2),
    Point(0, 0),
    Point(2.3, 8.1),  // Note the extra "," at the end - this is optional
  };

  /**
   * "Automatic" variable, created on the "stack"
   * Deleted automatically when function returns
   */
  Space space(points, SIZE(points));  // points get copied to internal copy of sapce

  /**
   * Prints the below output on exit, note that it is in reverse
   * because the elements are created on the stack (LIFO), space goes first, then points:
   * - First 4 lines are from destruction of Space class and the corresponding points
   * - Next 3 lines are from destruction of points array
   ~Space()
   ~Point()
   ~Point()
   ~Point()
   ~Point()
   ~Point()
   ~Point()
  */
}