#include "LinkedList.h"
#include "LinkedListStack.h"

int main() 
{

    std::cout<<"Linked List Only"<<std::endl<<std::endl;
    LinkedList list;
    list.search(1);

    list.addToHead(5);
    list.addToHead(7);
    list.addToTail(9);
    list.addToTail(97);
    list.addToHead(11);
    list.traverse();
    list.remove(5);
    list.traverse();
    list.search(7);
    list.search(10);
    list.traverse();
    list.removeFromHead();
list.removeFromTail();
list.traverse();


    std::cout<<std::endl<<std::endl<<std::endl;
    std::cout<<"Stack Using Linked List"<<std::endl<<std::endl;
    std::cout<<std::endl<<std::endl<<std::endl;


LinkedListStack l;
l.top();
l.push(6);
l.push(10);
l.top();
l.pop();
l.top();
}

    std::cout<<"Queue Using Linked List"<<std::endl<<std::endl;
// TBD