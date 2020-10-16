#include <cstdio>

#include "list.h"

Node::Node(int e) : value(e) {
}

void List::append(int e) {
  // Pre-condition: can't tell if list is empty or not
  Node *np = new Node(e);
  if (_tail == nullptr) {
    // List is empty, _head also must be nullptr
    _head = _tail = np;
  } else {
    // List is not empty, _head is also not nullptr
    _tail->next = np;
    _tail = _tail->next;
  }
}

bool List::search(int e) {
  for (Node *np = _head; np != nullptr; np = np->next) {
    if (np->value == e) {
      return true;
    }
  }
  return false;
}

bool List::remove(int e) {
  // TODO
  return false;
}

void List::dump() {
  // Traversal
  for (Node *np = _head; np != nullptr; np = np->next) {
    if (np != _head) {
      printf(" -> ");
    }
    printf("%d", np->value);
  }
  printf("\n");
}