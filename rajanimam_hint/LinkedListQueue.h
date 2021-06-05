#ifndef LINKEDLISTQUEUE_H
#define LINKEDLISTQUEUE_H

#include "LinkedList.h"
#include "Queue.h"
#include <iostream>

class LinkedListQueue: public Queue{
public:
 
 virtual bool isEmpty();

 virtual bool Enqueue(const int element);
 virtual bool Dequeue();
 virtual void front();
 virtual void rear();

private:
LinkedList list;
};


#endif