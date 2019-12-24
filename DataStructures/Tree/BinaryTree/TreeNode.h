//
//  Node.hpp
//  DataStructures
//
//  Created by SeMbA on 8/14/19.
//  Copyright © 2019 SeMbA. All rights reserved.
//
#ifndef TreeNode_h
#define TreeNode_h

class TreeNode {
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    
public:
    TreeNode();
    TreeNode(int value);
    TreeNode(int value, TreeNode *leftNode, TreeNode *rightNode);
    ~TreeNode();
};

#endif /* TreeNode_h */
