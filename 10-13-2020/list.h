#ifndef LIST_H_
#define LIST_H_

struct Node {
  int value;
  Node *next = nullptr;
  Node(int);
};

class List {
 private:
  Node *_head = nullptr;
  Node *_tail = nullptr;

 public:
  void append(int);
  bool search(int);
  void remove(int);
};

#endif  // LIST_H_