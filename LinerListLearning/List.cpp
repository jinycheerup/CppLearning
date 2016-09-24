//
//  List.cpp
//  StackLearning
//
//  Created by 靳宇星 on 16/9/24.
//  Copyright © 2016年 靳宇星. All rights reserved.
//

#include "List.hpp"
#include <iostream>

using namespace std;

List::List(int size)
{
    iSize = size;
    iList = new int[size];
    iLength = 0;
    
}
bool List::clearList()
{
    if (isEmpty()) {
        iLength = 0;
    }
    return true;
}
bool List::isEmpty()
{
    return iLength == 0? true:false;
}
int List::listLength()
{
    return iLength;
}
bool List::getElem(int index, int *elem)
{
    if (index < iLength || index < 0) {
        
        *elem = iList[index];
        return true;
    }
    return false;
}
int List::locateElem(int *elem)
{
    for (int i = 0; i < iLength; i++) {
        
        if (iList[i] == *elem) {
            
            return i;
        }
    }
    return -1;
}
bool List::preElem(int index, int *preElem)
{
    if (index < 1 || index > iLength) {
        return false;
    }
    *preElem = iList[index - 1];
    return true;
}

bool List::nextElem(int index, int *postElem)
{
    if (index < 0 || index > iLength - 1) {
        return false;
    }
    
    *postElem = iList[index + 1];
    return true;
}

bool List::insertElem(int index, int *insElem)
{
    if (index < 0 || index > iLength) {
        
        return false;
    }
    for (int i = iLength - 1; i >= index; i --) {
        
        iList[i + 1] = iList[i];
    }
    
    iList[index] = *insElem;
    iLength += 1;
    
    return true;
    
}
bool List::deleteElem(int index, int *delElem)
{
    if (index < 0 || index >= iLength) {
        return false;
    }
    *delElem = iList[index];
    
    for (int i = index + 1; i < iLength; i ++) {
        
        iList[i - 1] = iList[i];
    }
    
    iLength -= 1;
    
    return true;
}
void List::traverseList()
{
    for (int i = 0; i < iLength; i ++) {
        
        cout <<"第"<< i + 1<< "个元素："<< iList[i] << endl;
    }
}
List::~List()
{
    delete []iList;
    iList = NULL;
}