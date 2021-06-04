#include <iostream>

class Queue{
public:
 virtual ~Queue() {}
 virtual bool isEmpty() const = 0;
 virtual bool isFull() const = 0;

 virtual bool Enqueue(const int element) =0;
 virtual bool Dequeue(int &element) = 0;
 

};