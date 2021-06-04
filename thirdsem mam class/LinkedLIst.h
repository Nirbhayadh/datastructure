#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

class Node{
    public:
    int data;
    Node *next;

    Node(){
        next=nullptr;
        }

    Node(int a, Node *n){
        data=a;
        next=n;
    }
};


class LinkedList{
private:
Node *HEAD;
Node *TAIL;

public:
    LinkedList();
    bool isEmpty();
    void addToHead(int data);
    void addToTail(int data);
    void add(int data, Node *predecessor);
    void removeFromHead();
    void removeFromTail();
    void remove(int data);
    bool search(int data);
    bool retrieve(int data, Node *dataOutPtr);
    void traverse();
};


#endif
    
