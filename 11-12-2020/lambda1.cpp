#include <vector>
#include <algorithm>
#include <iostream>

bool ascComp1(int a, int b) {
  return a < b;
}

void dump(std::vector<int> v) {
  for (int i = 0; i < v.size(); i++) {
    if (i > 0) {
      std::cout << ", ";
    }
    std::cout << v[i];
  }
  std::cout << std::endl;
}

int main() {
  std::vector<int> na1 = {20, -4, 3, 99, 32};

  dump(na1);
  std::sort(na1.begin(), na1.end(), ascComp1);
  dump(na1);

  std::cout << std::endl;

  dump(na1);
  std::sort(na1.begin(), na1.end(), [](int a, int b) {
    return a > b;
  });
  dump(na1);
}