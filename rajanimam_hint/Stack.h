#include <iostream>
class Stack{
public:
 virtual ~Stack() {}
 virtual bool isEmpty()  = 0;

 virtual void push(const int element) =0;
 virtual void pop() = 0;
 virtual void top()  = 0;



};

