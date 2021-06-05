#include "LinkedListQueue.h"
#include <iostream>



  bool LinkedListQueue::isEmpty(){
     return list.isEmpty();
 }

  bool LinkedListQueue::Enqueue(const int element){
list.addToTail(element);

  }
  bool LinkedListQueue::Dequeue(){
      list.removeFromHead();
  }
  void LinkedListQueue::front(){
      list.top();
  }
  void LinkedListQueue::rear(){
    list.rear();
  }