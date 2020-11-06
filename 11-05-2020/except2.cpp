#include <cstdio>
#include <climits>

#define MAX_VALUE INT_MAX / 2
enum class AddError {
  NEGATIVE, BIG
};
namespace {
  const char *addErrors[] = {
    "must both be positive",
    "argument too large, may overflow",
  };
}

// Special add, with conditions
int add(int a, int b) {
  if (a >= MAX_VALUE || b >= MAX_VALUE) {
    throw AddError::BIG;
  }
  if (a < 0 || b < 0) {
    throw AddError::NEGATIVE;
  }
  if (b > a) {
    throw "second value must be smaller";
  }
  return a + b;
}

int main() {
  int a, b;
  printf("a, b: ");
  scanf("%d, %d", &a, &b);

  // "Catch" the exception "thrown" by add()
  // Note the multiple catch blocks, they are checked top down
  try {
    printf("%d + %d = %d\n", a, b, add(a, b));
  } catch (const char *err) {
    fprintf(stderr, "Error: %s\n", err);
  } catch (AddError err) {
    fprintf(stderr, "Error: %s\n", addErrors[int(err)]);
  }
}