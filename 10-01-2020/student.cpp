/**
 * Array of classes and new keyword.
 * 
 * Copyright (c) 2020, Sekhar Ravinutala.
 */

#include "student.h"

/**
 * New student, with max defined for courses. Note the name
 * "_availableCourses" for the member variable to clearly spell out
 * its purpose.
 * - name: Student name, should be null or empty
 * - maxCourses: max number of courses
 */
Student::Student(std::string name, int maxCourses) : _name(name), _maxCourses(maxCourses) {
  _courses = new std::string[maxCourses];  // Note the "new" keyword, space created on the heap
}

// Responsible for cleaning up
Student::~Student() {
  delete [] _courses;  // Keyword delete goes hand-in-hand with new; note the []
}

/**
 * Adds course if possible and returns updated list.
 * - course: Course name, should not be null or empty
 */
std::string *Student::addCourse(std::string course) {
  // Check bad conditions first ("sad" paths)
  if (_currentCourseIndex == _maxCourses) {
    return _courses;
  }
  _courses[_currentCourseIndex++] = course;  // Note that the postfix increment
  return _courses;
}