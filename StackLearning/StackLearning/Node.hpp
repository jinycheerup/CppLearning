//
//  Node.hpp
//  StackLearning
//
//  Created by 靳宇星 on 16/9/24.
//  Copyright © 2016年 靳宇星. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>

class Node{
    
public:
    
    Node(char c = '0');
    void printNode();
    
private:
    
    char iNode;
};
#endif /* Node_hpp */
