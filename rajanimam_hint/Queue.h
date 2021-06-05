#include <iostream>
class Queue{
public:
 virtual ~Queue() {}
 virtual bool isEmpty()=0;

 virtual bool Enqueue(const int element)=0;
 virtual bool Dequeue()=0;
 virtual void front()=0;
 virtual void rear()=0;



};
