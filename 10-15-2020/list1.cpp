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

  // Get input from user to search the list
  int v;
  // Infinite loop using empty for
  for (;;) {
    printf("Value: ");  // Prompt
    scanf("%d", &v);  // Same % values as printf(), note the &v
    if (v == 0) {  // 0 here is called the "sentinel" value
      break;
    }
    printf("%d: %s\n", v, l1.search(v) ? "found" : "not found");
  }
}