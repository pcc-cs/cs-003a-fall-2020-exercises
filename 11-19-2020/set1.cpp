#include <set>
#include <vector>
#include <cstdio>
#include <iostream>

// count() is one way to check membership
// Another way is: s.find(v) != s.end()
// Method contains() added in C++ 2020
#define C(s, v) (s.count(v) > 0 ? "contains" : "does not contain")

// Union
template <class T>
std::set<T> operator||(std::set<T> s1, std::set<T> s2) {
  std::set<T> s3 = s1;
  for (T e : s2) {
    s3.insert(e);
  }
  return s3;
}

// Intersection
template <class T>
std::set<T> operator&&(std::set<T> s1, std::set<T> s2) {
  std::set<T> s3;
  for (T e : s1) {
    if (s2.count(e) > 0) {
      s3.insert(e);
    }
  }
  return s3;
}

template <class T>
void dump(std::set<T> s) {
  for (T x : s) {
    std::cout << x << " ";
  }
  std::cout << std::endl;
}

int main() {
  std::set<int> s1 = {10, 20, 30};
  std::set<int> s2 = {20, 30, 40};

  // Check if in set
  int v1 = 40;
  printf("set1 %s %d\n", C(s1, v1), v1);
  printf("set2 %s %d\n", C(s2, v1), v1);

  //std::vector<int> s12u = union(s1, s2);
  dump(s1);
  dump(s2);
  dump(s1 || s2);
  dump(s1 && s2);
}