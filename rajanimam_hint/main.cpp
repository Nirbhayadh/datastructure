#include "LinkedList.h"
#include "LinkedListStack.h"
#include "LinkedListQueue.h"

int main() 
{

//     std::cout<<"Linked List Only"<<std::endl<<std::endl;
//     LinkedList list;
//     list.search(1);
//     list.addToTail(74);
//     list.addToHead(5);
//     list.addToHead(7);
//     list.addToTail(9);
//     list.addToTail(97);
//     list.addToHead(11);
//     list.traverse();
//     list.remove(5);
//     list.traverse();
//     list.search(7);
//     list.search(10);
//     list.traverse();
//     list.removeFromHead();
// list.removeFromTail();
// list.traverse();


//     std::cout<<std::endl<<std::endl<<std::endl;
//     std::cout<<"Stack Using Linked List"<<std::endl<<std::endl;
//     std::cout<<std::endl<<std::endl<<std::endl;


// LinkedListStack l;
// l.top();
// l.push(6);
// l.push(10);
// l.top();
// l.pop();
// l.top();


    std::cout<<"Queue Using Linked List"<<std::endl<<std::endl;
// TBD

LinkedListQueue lq;
std::cout<<lq.isEmpty()<<std::endl;
lq.front();
lq.Dequeue();
lq.Enqueue(10);
lq.Enqueue(21);
lq.Dequeue();
std::cout<<lq.isEmpty()<<std::endl;
lq.Enqueue(29);
lq.Enqueue(31);

lq.Enqueue(45);

lq.front();
lq.rear();

}