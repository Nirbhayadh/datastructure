#include "LinkedListStack.h"
#include <iostream>
    
    

 
  bool LinkedListStack::isEmpty() {
      return list.isEmpty();
  }


  void LinkedListStack::push(const int element){
      list.addToHead(element);
  }
  void LinkedListStack::pop(){
       list.removeFromHead();
  }
  void LinkedListStack::top() {
      list.top();
  }





