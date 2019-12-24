//
//  BinaryTree.hpp
//  DataStructures
//
//  Created by SeMbA on 8/14/19.
//  Copyright © 2019 SeMbA. All rights reserved.
//

#include "TreeNode.h"

class BinaryTree {
    
public:
    TreeNode *root;
    int levels;
    
public:
    BinaryTree(void);
    ~BinaryTree(void);
    bool Find(int value);
    void Insert(int value);
    void Insert(int value, TreeNode* startNode);
    void Remove(int value);
    
private:
};
