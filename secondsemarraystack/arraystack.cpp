#include <iostream>
#include "arraystack.h"

    ArrayStack::ArrayStack(int size){
        array_size=size;
        data=new int[size];
        front_index = -1;
        rear_index = -1;
    }
    ArrayStack::~ArrayStack(){
        delete [] data;
    }

  bool ArrayStack::isEmpty() const{
return front_index==-1;


  }
  bool ArrayStack::isFull() const{
return rear_index==array_size-1;

  }

  bool ArrayStack::push(const int element){
if(!isFull()){
front_index=0;
rear_index++;
    data[rear_index]=element;
    
    return 1;
}
else {

    return 0;
}

  }
  bool ArrayStack::pop(int &element){
if(!isEmpty()){
    element=data[rear_index];
rear_index--;
if(rear_index==-1){
    front_index=-1;
}
return 1;
}
else {
    return 0;
}

  };
  bool ArrayStack::top(int &element) const{
if(!isEmpty()){
    element=data[front_index];

    return 1;
}
else {
    return 0;
}

  }

  void ArrayStack::traverse() const{
      for (int i=front_index;i<=rear_index;i++){
          std::cout<<data[i]<<std::endl;
      }
  }
