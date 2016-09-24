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
#include "Node.hpp"

class myStack{
    
public:
    myStack(int size);
    ~myStack();
    bool isEmpty();
    bool isFull();
    void clean();
    int stackLength();
    bool push(Node node);
    bool pop(Node &node);
    void stackTraverse(bool isFromBottom);
    
private:
    Node *iBuffer;
    int iSize;
    int iTop;
    
    
};
#endif /* Stack_hpp */
