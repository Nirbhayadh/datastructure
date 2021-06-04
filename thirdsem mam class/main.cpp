#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList list;
   list.addToHead(10);
   list.addToHead(20);
   list.addToHead(50);
   list.addToTail(70);
   list.traverse();
    return 0;
}
