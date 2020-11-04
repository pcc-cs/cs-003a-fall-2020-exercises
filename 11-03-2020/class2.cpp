#include <cstdio>
#include <cstring>
#include <cstdint>

enum class Course {
  CS001, CS002, CS003A
};

class User {
 private:
   // OK to write to _name, but you cannot overwrite its contents
  const char *_name;

 public:
  User(const char *name) {
    char *n = new char[strlen(name) + 1];
    strcpy(n, name);
    _name = n;
  }
  // Must declare this virtual if you want destructors of derived classes to be called
  virtual ~User() {
    printf("~User\n");
    // Must delete manually in destructor to prevent memory leak
    delete _name;
  }
};

class Student : public User {
 private:
  Course *_courses;

 public:
  Student(const char *name, uint8_t ncourses) : User(name) {
    _courses = new Course[ncourses];
  }
  // To allow for future derived classes
  virtual ~Student() {
    printf("~Student()\n");
    // Must delete manually in destructor to prevent memory leak
    delete _courses;
  }
};

int main() {
  // Will result in a memory leak if User::~User() is not virtual
  User *u1p = new Student("Johnny Socko", 8);
  delete u1p;
}