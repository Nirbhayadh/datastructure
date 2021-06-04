#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList()
{
    HEAD = nullptr;
    TAIL = nullptr;
}
LinkedList::~LinkedList(){
delete HEAD;
delete TAIL;

}
bool LinkedList::isEmpty()
{
    return HEAD == nullptr && TAIL == nullptr;
}

void LinkedList::addToHead(int element)
{
    Node *newNode = new Node(element, HEAD);

    HEAD = newNode;
    if (TAIL == nullptr)
    {
        TAIL = HEAD;
    }
    std::cout<<"Added to HEAD: "<<element<<std::endl;
}

 void LinkedList::addToTail(int data){
Node *newNode=new Node(data,nullptr);
TAIL->next=newNode;
TAIL=newNode;
if (HEAD==nullptr){
    HEAD=TAIL;
}
    std::cout<<"Added to TAIL: "<<data<<std::endl;

 }
  bool LinkedList::add(int data, Node *predecessor ){
Node *newnode=new Node(data,predecessor->next);
predecessor->next=newnode;

  }







void LinkedList::removeFromHead()
{
    if (!isEmpty())
    {
        Node *nodeToDelete=HEAD;
       int  data = nodeToDelete->info;

if (HEAD==TAIL){
    HEAD=nullptr;
    TAIL=nullptr;
    
}
else{
        HEAD = nodeToDelete->next;

        if (HEAD == nullptr)
        {
            TAIL = nullptr;
        }
        
}

        std::cout<<"Removed from HEAD: "<<data<<std::endl;

    }  
    else 
    {
    std::cout<<"Sorry, List is empty"<<std::endl;
    }
}
 void LinkedList::removeFromTail(){
     if(!isEmpty()){

    Node *nodeToDelete=TAIL;
   int  data = nodeToDelete->info;
if (HEAD==TAIL){
    HEAD=nullptr;
    TAIL=nullptr;
    
}
else{
    
    Node *counter=HEAD;
    while (counter->next!=TAIL){
        counter=counter->next;
    }
    TAIL=counter;
    counter->next=nullptr;
if (HEAD == nullptr)
        {
            TAIL = nullptr;
        }

}
        std::cout<<"Removed from TAIL: "<<data<<std::endl;
     }
     else {
    std::cout<<"Sorry, List is empty"<<std::endl;
     }

 }
  void LinkedList::search(int data){
if(!isEmpty()){
Node *counter = HEAD;
while(counter->next!=nullptr){
    if (counter->info==data){
std::cout<<data<<" is present in the list"<<std::endl;  
break;  }

    
    counter=counter->next;
}
if(counter->info!=data){
std::cout<<data<<" is not present in the list"<<std::endl;  
}

}
else{
std::cout<<"Sorry, the list is empty"<<std::endl;
}
  }

  void LinkedList::remove(int data){
if(!isEmpty()){
    if(HEAD->info==data){
        removeFromHead();

    }
    else if (TAIL->info==data){
        removeFromTail();
    }
else{
Node *predecessor=HEAD;
Node *temp=HEAD->next;
while(temp->next!=TAIL){
    if(temp->info==data){
        break;
    }
    else {
    predecessor=predecessor->next;
    temp=temp->next;
    }
}
if (temp->next!=nullptr){
    predecessor->next=temp->next;
    std::cout<<data<<" is removed from the list"<<std::endl;
}
else{
    std::cout<<data<<" is not present in the list"<<std::endl;
}
}

}
else {
std::cout<<"Sorry, the list is empty"<<std::endl;
}
  }







void LinkedList::traverse(char separator)
{

    if (isEmpty())
    {
        std::cout << "List is empty!!\n";
    }
    else
    {
        Node *temp = HEAD;

        while (temp != nullptr)
        {
            std::cout << temp->info << separator;
            temp = temp->next;
        }
        std::cout << std::endl;
    }
}