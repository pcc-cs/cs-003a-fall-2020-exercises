#include "list.h"

Node::Node(int e) : value(e) {
}

void List::append(int e) {
  Node *np = new Node(e);
  if (_tail == nullptr) {
    _head = _tail = np;
  } else {
    _tail->next = np;
    _tail = _tail->next;
  }
}
