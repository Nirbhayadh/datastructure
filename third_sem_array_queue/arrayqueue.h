#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H


#include <iostream>
#include "queue.h"





class ArrayQueue: public Queue{
private:
int array_size;
int *data;
int front_index, rear_index;


public:
    ArrayQueue(int size);
    ~ArrayQueue();
  bool isEmpty() const;
  bool isFull() const;

  bool Enqueue(const int element);
  bool Dequeue(int &element);
  
  void traverse() const;



};


#endif