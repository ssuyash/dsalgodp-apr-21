#include <iostream>
using namespace std;

#define STACK_MAX_SIZE 100

class Stack{
    int cursor = -1;
public:
    int stackArray[STACK_MAX_SIZE];
    bool isEmpty();
    bool push(int element);
    int pop();
    int peek();
    int length();
}

bool Stack::isEmpty(){
    return cursor == -1;
}

bool Stack::push(int elem){
    
    //check for overflow condition
    if(cursor == STACK_MAX_SIZE-1){
        cout << "overflow";
        return false;
    }else{
        cursor++;   
        stackArray[cursor] = elem;
        return true;
    }
   


}

//this method will remove the last 
//element from stack and returns the removed item 
int Stack::pop(){
    if(cursor==-1){
        cout << "Stack underflow";
        return 0;
    }else{
        int lastElem = stackArray[cursor];
        cursor--;
        return lastElem;
    }
}


int Stack::peek(){
    if(cursor==-1){
        cout << "Stack underflow";
        return 0;
    }else{
        int lastElem = stackArray[cursor];
        return lastElem;
 
}

int Stack::length(){
    return cursor+1;
}







