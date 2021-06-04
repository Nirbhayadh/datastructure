#include <iostream>
#include "arrayqueue.h"

    ArrayQueue::ArrayQueue(int size){
        array_size=size+1;
        data=new int[size+1];
        front_index = -1;
        rear_index = -1;
    }
    ArrayQueue::~ArrayQueue(){
        delete [] data;
    }

  bool ArrayQueue::isEmpty() const{
return front_index==rear_index;


  }
  bool ArrayQueue::isFull() const{
return front_index== (rear_index + 1) % (array_size);

  }

  bool ArrayQueue::Enqueue(const int element){
if(!isFull()){
rear_index = (rear_index + 1) % array_size;


    data[rear_index]=element;
    
    return 1;
}
else {

    return 0;
}

  }
  bool ArrayQueue::Dequeue(int &element){
if(!isEmpty()){
    element=data[front_index];
 front_index = (front_index + 1) % array_size;

return 1;
}
else {
    return 0;
}

  };


  void ArrayQueue::traverse() const{
      for (int i=(front_index+1)%array_size;i<=rear_index;i++){
          std::cout<<data[i]<<std::endl;
      }
  }
