#include <string>
#include <iostream>
#include <random>

int main() {
  // Huge array of characters, very efficient
  const int size = 1e8;
  char *buf = new char[size];
  printf("Allocated\n");
  for (int i = 0; i < size; i++) {
    buf[i] = 'a' + rand() % 26;
  }
  buf[size - 1] = '\0';
  printf("%s\n", buf);
  free(buf);
}
