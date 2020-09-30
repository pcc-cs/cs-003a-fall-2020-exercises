#include <cstdio>

#define SIZE(a) (sizeof(a) / sizeof(a[0]))

int main() {
  int vals[] = {-1000, -100, 0, 100, 1000};

  printf("*** char ***\n");
  for (int i = 0; i < SIZE(vals); i++) {
    char c = vals[i];
    printf("%d => %d\n", vals[i], c);
  }

  printf("\n*** unsigned char ***\n");
  for (int i = 0; i < SIZE(vals); i++) {
    unsigned char uc = vals[i];
    printf("%d => %d\n", vals[i], uc);
  }
}