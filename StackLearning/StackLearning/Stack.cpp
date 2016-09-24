//
//  Stack.cpp
//  StackLearning
//
//  Created by 靳宇星 on 16/9/24.
//  Copyright © 2016年 靳宇星. All rights reserved.
//

#include "Stack.hpp"
#include <iostream>

using namespace std;

myStack::myStack(int size){
    
    iSize = size;
    iBuffer = new Node[iSize];
    iTop = 0;
    
}

myStack::~myStack()
{
    delete []iBuffer;
}

bool myStack::isEmpty()
{
    return iSize > 0?false:true;
}

bool myStack::isFull()
{
    return iSize == iTop?true:false;
}

void myStack::clean()
{
    iTop = 0;
}

int myStack::stackLength()
{
    return iTop;
}

bool myStack::push(Node node)
{
    if (isFull()) {
        
        return false;
    }
    iBuffer[iTop] = node;
    iTop += 1;
    return true;
}

bool myStack::pop(Node &node)
{
    if (isEmpty()) {
        return false;
    }
    iTop -= 1;
    node = iBuffer[iTop];
    
    return true;
}

void myStack::stackTraverse(bool isFromBottom)
{
    for (int i = 0; i < iTop; i ++) {
        
        if (isFromBottom) {
            
            iBuffer[iTop - i - 1].printNode();
        }
        else{
            
            iBuffer[i].printNode();
        }
    }
    
}






















