#include "LinkedList.h"
// #include "Stack.h"

int main() 
{
    LinkedList list;
list.search(1);
    list.addToHead(5);
    list.addToHead(7);
    list.addToTail(9);
    list.search(7);
    list.search(10);
    list.traverse();
    list.removeFromHead();
list.removeFromTail();

    list.traverse();
    
    // list.addToHead(5);
    // list.addToHead(10);
    // list.addToHead(15);

    // list.traverse(',');

    // list.removeFromHead();
    
    // list.traverse();

    // list.removeFromHead();
    
    // list.traverse();

    // list.removeFromHead();
    
    // list.traverse();

    // list.removeFromHead();
    
    // list.traverse();

    // LinkedListStack s;
    // s.push(5);
    // s.push(10);

    // std::cout << s.pop() << ", " << s.pop() << std::endl; 
}