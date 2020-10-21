#include <cstdio>

#include "list.h"

#define SIZE(a) (sizeof(a) / sizeof(a[0]))

int main() {
  int a[] = {10, 20, 30, 40};
  List l1;
  for (int i = 0; i < SIZE(a); i++) {
    l1.append(a[i]);
  }
  l1.dump();

  // Get input from user to remove from the list
  int v;
  printf("Value to remove: ");
  scanf("%d", &v);
  printf("Value %d removed: %s\n", v, l1.remove(v) ? "Yes" : "No");
  l1.dump();
}