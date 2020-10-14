#include <cstdio>

/**
 * Insert into sorted array:
 * - a: Sorted array
 * - n: Number of elements in array
 * - e: Element to be inserted
 */
int *insert(int *a, int n, int e) {
  int *b = new int[n + 1];
  for (int i = 0; i < n; i++) {
    // Before insert
    if (a[i] < e) {
      b[i] = a[i];
      if (i == n - 1) {
        b[i + 1] = e;
      }
    // After insert
    } else {
      b[i] = e;
      for (; i < n; i++) {
        b[i + 1] = a[i];
      }
    }
  }
  return b;
}

int main() {
  int a[] = {10, 20, 30, 40};
  int *b = insert(a, 4, 25);
  for (int i = 0; i < 5; i++) {
    printf("b[%d] = %d\n", i, b[i]);
  }
  delete [] b;
}