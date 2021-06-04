#include <iostream>
#include "LinkedList.h"


LinkedList::LinkedList(){
    HEAD=nullptr;
    TAIL=nullptr;
}

bool LinkedList::isEmpty(){
    return HEAD == nullptr && TAIL== nullptr;
}

void LinkedList::addToHead(int d){
Node *newNode= new Node(d, HEAD);
HEAD=newNode;


}
void LinkedList::addToTail(int d){
Node *newNode= new Node(d, TAIL);
TAIL=newNode;


}
void LinkedList::traverse(){
    Node *temp = HEAD;
    while(temp->next!=nullptr){
        std::cout<<temp->data<<std::endl;
    }

}