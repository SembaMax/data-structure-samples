//
//  TreeTraversal.hpp
//  DataStructures
//
//  Created by SeMbA on 12/23/19.
//  Copyright © 2019 SeMbA. All rights reserved.
//
#ifndef TreeTraversal_h
#define TreeTraversal_h

#include "BinaryTree.h"
#include "LinkedBasedQueue.h"

class TreeTraversal {
private:
    void VisitNodePreOrder(TreeNode* node, LinkedBasedQueue<int>* result);
    void VisitNodePostOrder(TreeNode* node, LinkedBasedQueue<int>* result);
    void VisitNodeInOrder(TreeNode* node, LinkedBasedQueue<int>* result);
    
public:
    void BFT(BinaryTree tree);
    void DFTPreOrder(BinaryTree tree);
    void DFTPostOrder(BinaryTree tree);
    void DFTInOrder(BinaryTree tree);
};

#endif /* TreeTraversal_h */
