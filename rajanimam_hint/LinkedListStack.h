#ifndef LINKEDLISTSTACK_H
#define LINKEDLISTSTACK_H



#include "LinkedList.h"
#include "Stack.h"



class LinkedListStack : public Stack
{
public:

 virtual bool isEmpty() ;

 virtual void push(const int element);
 virtual void pop();
 virtual void top() ;



private:
    LinkedList list;
};


#endif