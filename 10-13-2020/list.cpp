#include "list.h"

Node::Node(int e) : value(e) {
}

void List::append(int e) {
  Node *n = new Node(e);
  if (_tail == nullptr) {
    _head = _tail = n;
  } else {
    _tail->next = n;
    _tail = _tail->next;
  }
}