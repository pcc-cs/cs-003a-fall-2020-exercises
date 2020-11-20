#include <deque>
#include <iostream>

template <class T>
void dump(std::deque<T> dq) {
  for (int i = 0; i < dq.size(); i++) {
    if (i > 0) {
      std::cout << " -> ";
    }
    std::cout << dq[i];
  }
  std::cout << std::endl;
}

int main() {
  std::deque<int> dq1 = {10, -2, 33, 1};
  dump(dq1);

  // Copy elements from one to another, just like with vector
  std::deque<int> dq2;
  for (int n : dq1) {
    dq2.push_back(n);
  }
  dump(dq2);

  // Push in O(1) time, like with a stack
  std::deque<int> dq3;
  for (int n : dq1) {
    dq3.push_front(n);
  }
  dump(dq3);
}