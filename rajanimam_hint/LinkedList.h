#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

class Node
{
public:
    int info;
    Node *next;

    Node() {
        next=nullptr;
    }
    ~Node(){
        delete next;
    }
    Node(int i, Node *n){
info=i;
next=n;
    }
};

class LinkedList
{
public:
    public:
 LinkedList();
 ~LinkedList();
 bool isEmpty();
 void addToHead(int data);
 void addToTail(int data);
 bool add(int data, Node *predecessor );
 void removeFromHead ();
 void removeFromTail ();
 void remove(int data);
 void top();
 void search(int data);
 bool retrieve(int data, Node *dataOutPtr);
 void traverse(char separator = ' ');

private:
    Node *HEAD;
    Node *TAIL;
};

#endif