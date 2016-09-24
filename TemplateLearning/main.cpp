//
//  main.cpp
//  StackLearning
//
//  Created by 靳宇星 on 16/9/24.
//  Copyright © 2016年 靳宇星. All rights reserved.
//

#include <iostream>
#include "Stack.hpp"
#include "Node.hpp"
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    myStack<Node> stack = myStack<Node>::myStack(5);
    
    Node a = Node::Node('a');
    Node b = Node::Node('b');
    Node c = Node::Node('c');
    Node d = Node::Node('d');
    Node e = Node::Node('e');
    
    stack.push(a);
    stack.push(b);
    stack.push(c);
    stack.push(d);
    stack.push(e);
        
    stack.stackTraverse(true);
    cout<< "逆序"<<endl;
    stack.stackTraverse(false);
    
    return 0;
}
