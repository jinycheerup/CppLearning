//
//  List.hpp
//  StackLearning
//
//  Created by 靳宇星 on 16/9/24.
//  Copyright © 2016年 靳宇星. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <stdio.h>

class List{
    
public:
    List(int size);
    bool clearList();
    bool isEmpty();
    int listLength();
    bool getElem(int index, int *elem);
    int locateElem(int *elem);
    bool preElem(int index, int *preElem);
    bool nextElem(int index, int *postElem);
    bool insertElem(int index, int *insElem);
    bool deleteElem(int index, int *delElem);
    
    void traverseList();
    ~List();
    
private:
    
    int *iList;
    int iSize;
    int iLength;
};
#endif /* List_hpp */
