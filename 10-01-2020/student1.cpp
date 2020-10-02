/**
 * Demo array of classes and new keyword.
 * 
 * Copyright (c) 2020, Sekhar Ravinutala.
 */

#include "student.h"

#define MAX_COURSES 3

void dump(std::string *courses, int maxCourses) {
  std::cout << std::endl;
  for (int i = 0; i < maxCourses; i++) {
    std::cout << "Course " << (i + 1) << ": " << courses[i] << std::endl;
  }
}

int main() {
  Student p1("Jimmy Neutron", MAX_COURSES);
  std::string courses[] = {"CS002", "CS003A", "CS008", "CS045"};

  // Add one more than max (or try)
  for (int i = 0; i < MAX_COURSES + 1; i++)  {
    dump(p1.addCourse(courses[i]), MAX_COURSES);
  }
}