#include <map>
#include <cstdio>

#define SIZE(a) (sizeof(a) / sizeof(a[0]))

void insert(std::map<std::string, double> &gpa, std::string key, double value) {
  gpa[key] = value;
}

int main() {
  // Regular array
  std::string names1[] = {"Lisa", "Jim"};
  double gpa1[] = {3.79, 4.0};
  for (int i = 0; i < SIZE(names1); i++) {
    printf("%s: %.2lf\n", names1[i].c_str(), gpa1[i]);
  }

  printf("\n");

  // Associative array
  // Note that the keys are always sorted in a C++ map
  std::map<std::string, double> gpa2;
  gpa2["Lisa"] = 4.0;
  gpa2["Jim"] = 3.79;
  for (auto &e : gpa2) {
    printf("%s: %.2lf\n", e.first.c_str(), e.second);
  }

  printf("\n");
  
  // Another way to iterate through map
  for (auto it = gpa2.begin(); it != gpa2.end(); it++) {
    printf("%s: %.2lf\n", it->first.c_str(), it->second);
  }

  printf("\n");

  // Insert and check (to demo debugging)
  insert(gpa2, "Mario", 3.9);
  for (auto &e : gpa2) {
    printf("%s: %.2lf\n", e.first.c_str(), e.second);
  }
}