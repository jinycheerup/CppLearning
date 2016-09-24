//
//  Stack.hpp
//  StackLearning
//
//  Created by 靳宇星 on 16/9/24.
//  Copyright © 2016年 靳宇星. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

template <typename T>

class myStack{
    
public:
    myStack(int size);
    ~myStack();
    bool isEmpty();
    bool isFull();
    void clean();
    int stackLength();
    bool push(T node);
    bool pop(T &node);
    void stackTraverse(bool isFromBottom);
    
private:
    T *iBuffer;
    int iSize;
    int iTop;
    
    
};
template <typename T>
myStack<T>::myStack(int size){
    
    iSize = size;
    iBuffer = new T[iSize];
    iTop = 0;
    
}

template <typename T>
myStack<T>::~myStack()
{
    delete []iBuffer;
}

template <typename T>
bool myStack<T>::isEmpty()
{
    return iSize > 0?false:true;
}

template <typename T>
bool myStack<T>::isFull()
{
    return iSize == iTop?true:false;
}

template <typename T>
void myStack<T>::clean()
{
    iTop = 0;
}

template <typename T>
int myStack<T>::stackLength()
{
    return iTop;
}

template <typename T>
bool myStack<T>::push(T node)
{
    if (isFull()) {
        
        return false;
    }
    iBuffer[iTop] = node;
    iTop += 1;
    return true;
}

template <typename T>
bool myStack<T>::pop(T &node)
{
    if (isEmpty()) {
        return false;
    }
    iTop -= 1;
    node = iBuffer[iTop];
    
    return true;
}

template <typename T>
void myStack<T>::stackTraverse(bool isFromBottom)
{
    for (int i = 0; i < iTop; i ++) {
        
        if (isFromBottom) {
            
           cout <<iBuffer[iTop - i - 1];
        }
        else{
            
           cout <<iBuffer[i];
        }
    }
    
}
#endif /* Stack_hpp */
