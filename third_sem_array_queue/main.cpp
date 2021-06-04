#include <iostream>
#include "arrayqueue.h"
using namespace std;

int main(){
ArrayQueue a(5);
cout<<a.isEmpty()<<endl;
cout<<a.isFull()<<endl<<endl;
a.Enqueue(5);
a.Enqueue(4);
a.Enqueue(1);
a.Enqueue(7);
a.Enqueue(6);
int dequeue;
a.Dequeue(dequeue);
a.Dequeue(dequeue);
// a.Dequeue(dequeue);
// a.Dequeue(dequeue);
// a.Dequeue(dequeue);
// a.Dequeue(dequeue);
a.Enqueue(9);
a.traverse();
}