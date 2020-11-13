#include <string>
#include "list.h"

#define SIZE(a) (sizeof(a) / sizeof(a[0]))

int main() {
  // Using int values
  int a[] = {10, 20, 30, 40};
  List<int> l1;
  for (int i = 0; i < SIZE(a); i++) {
    l1.append(a[i]);
  }
  l1.dump();

  // Using std::string
  std::string b[] = {"Johnny", "Lisa", "Mario"};
  List<std::string> l2;
  for (int i = 0; i < SIZE(b); i++) {
    l2.append(b[i]);
  }
  l2.dump();
}