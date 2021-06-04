#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H


#include <iostream>
#include "stack.h"





class ArrayStack: public Stack{
private:
int array_size;
int *data;
int front_index, rear_index;


public:
    ArrayStack(int size);
    ~ArrayStack();
  bool isEmpty() const;
  bool isFull() const;

  bool push(const int element);
  bool pop(int &element);
  bool top(int &element) const;
  void traverse() const;



};


#endif