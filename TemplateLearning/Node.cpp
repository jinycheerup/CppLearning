//
//  Node.cpp
//  StackLearning
//
//  Created by 靳宇星 on 16/9/24.
//  Copyright © 2016年 靳宇星. All rights reserved.
//

#include "Node.hpp"
#include <iostream>

using namespace std;

ostream &operator<<(ostream &os, Node &nod)
{
    os << nod.iNode << ",";
    
    return os;
}
Node::Node(char c)
{
    iNode = c;
}

void Node::printNode()
{
    cout << iNode << endl;
}
