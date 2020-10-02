/**
 * Array of classes and new keyword.
 * 
 * Copyright (c) 2020, Sekhar Ravinutala.
 */

#include <string>
#include <iostream>

class Student {
 private:
  std::string _name;
  std::string *_courses;  // Note the * to denote pointer to std::string array
  int _maxCourses;
  int _currentCourseIndex = 0;  // Works for all instances

 public:
  Student(std::string, int);
  ~Student();
  std::string *addCourse(std::string);  // This returns the updated alias list
};