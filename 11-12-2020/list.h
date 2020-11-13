#ifndef LIST_H_
#define LIST_H_

#include <iostream>

template <class T>
struct Node {
  // Any type
  T value;
  Node *next = nullptr;
  Node(T e) : value(e) {
  }
};

template <class T>
class List {
 private:
  Node<T> *_head = nullptr;
  Node<T> *_tail = nullptr;

 public:
  void append(T e) {
    // Pre-condition: can't tell if list is empty or not
    Node<T> *np = new Node<T>(e);
    if (_tail == nullptr) {
      // List is empty, _head also must be nullptr
      _head = _tail = np;
    } else {
      // List is not empty, _head is also not nullptr
      _tail->next = np;
      _tail = _tail->next;
    }
  }

  bool search(T e) {
    for (Node<T> *np = _head; np != nullptr; np = np->next) {
      if (np->value == e) {
        return true;
      }
    }
    return false;
  }

  bool remove(T e) {
    // Node to delete
    Node<T> *dp;

    // No elements
    if (_head == nullptr) {
      return false;
    }

    // Head is a match
    if (_head->value == e) {
      dp = _head;
      _head = _head->next;
      // One element
      if (_head == nullptr) {
        _tail = nullptr;
      }
      delete dp;
      return true;
    }

    // Head is not a match
    for (Node<T> *np = _head; np->next != nullptr; np = np->next) {
      if (np->next->value == e) {
        dp = np->next;
        np->next = np->next->next;
        if (np->next == nullptr) {
          _tail = np;
        }
        delete dp;
        return true;
      }
    }
    return false;
  }

  void dump() {
    // Traversal
    for (Node<T> *np = _head; np != nullptr; np = np->next) {
      if (np != _head) {
        std::cout << " -> ";
      }
      std::cout << np->value;
    }
    std::cout << std::endl;
  }
};

#endif  // LIST_H_