#include <iostream>
#include "arraystack.h"
using namespace std;

int main(){
ArrayStack a(5);
cout<<a.isEmpty()<<endl;
cout<<a.isFull()<<endl;

cout<<a.push(5)<<endl;
cout<<a.push(7)<<endl;
cout<<a.push(1)<<endl;
cout<<a.push(6)<<endl;
cout<<a.push(3)<<endl;
cout<<a.push(13)<<endl;
cout<<a.push(5)<<endl;
cout<<a.isFull()<<endl;
int top;
a.top(top);
cout<<top<<endl;
int pop;
a.pop(pop);
cout<<pop<<endl;
cout<<a.isFull()<<endl;
cout<<endl;
a.traverse();
}