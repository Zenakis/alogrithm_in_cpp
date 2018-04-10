//
//  binarytree.hpp
//  alogrithm
//
//  Created by Zen on 02/03/2017.
//  Copyright © 2017 Zen. All rights reserved.
//

#ifndef binarytree_hpp
#define binarytree_hpp

#include <stdio.h>
#include "iostream"
#include "queue"
#include "stack"

struct Node
{
    Node* parent;
    Node* left;
    Node* right;
    int data;
};

Node* root = 0;

#endif /* binarytree_hpp */
