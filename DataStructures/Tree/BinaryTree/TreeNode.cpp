//
//  Node.cpp
//  DataStructures
//
//  Created by SeMbA on 8/14/19.
//  Copyright © 2019 SeMbA. All rights reserved.
//

#include <stdio.h>
#include "TreeNode.h"

TreeNode::TreeNode()
{
    data = NULL;
    left = nullptr;
    right = nullptr;
}

TreeNode::TreeNode(int value)
{
    data = value;
    left = nullptr;
    right = nullptr;
}

TreeNode::TreeNode(int value, TreeNode *leftNode, TreeNode *rightNode)
{
    data = value;
    left = leftNode;
    right = rightNode;
}
