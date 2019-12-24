//
//  TreeTraversal.cpp
//  DataStructures
//
//  Created by SeMbA on 12/23/19.
//  Copyright © 2019 SeMbA. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "TreeTraversal.h"
#include "LinkedBasedQueue.h"


using namespace std;

#ifndef LinkedBasedQueue_h
#define LinkedBasedQueue_h

void TreeTraversal::BFT(BinaryTree tree)
{
    LinkedBasedQueue<int>* result = new LinkedBasedQueue<int>;
    LinkedBasedQueue<TreeNode*>* queue = new LinkedBasedQueue<TreeNode*>;
    
    if (tree.root == nullptr) {
        return;
    }
    TreeNode* current = tree.root;
    queue->Enqueue(current);
    
    while (queue->Count() > 0) {
        TreeNode* value = queue->Dequeue();
        if (value->left != nullptr) {
            queue->Enqueue(value->left);
        }
        if (value->right != nullptr) {
            queue->Enqueue(value->right);
        }
        result->Enqueue(value->data);
    }
    
    result->Display();
}

void TreeTraversal::DFTPreOrder(BinaryTree tree)
{
    LinkedBasedQueue<int>* result = new LinkedBasedQueue<int>;

    if (tree.root == nullptr) {
        return;
    }
    TreeNode* current = tree.root;
    TreeTraversal::VisitNodePreOrder(current, result);
    result->Display();
}

void TreeTraversal::VisitNodePreOrder(TreeNode* node, LinkedBasedQueue<int>* result)
{
    result->Enqueue(node->data);
    if (node->left != nullptr) {
        VisitNodePreOrder(node->left, result);
    }
    if (node->right != nullptr) {
        VisitNodePreOrder(node->right, result);
    }
}

void TreeTraversal::DFTPostOrder(BinaryTree tree)
{
    LinkedBasedQueue<int>* result = new LinkedBasedQueue<int>;

    if (tree.root == nullptr) {
        return;
    }
    TreeNode* current = tree.root;
    TreeTraversal::VisitNodePostOrder(current, result);
    result->Display();
}

void TreeTraversal::VisitNodePostOrder(TreeNode* node, LinkedBasedQueue<int>* result)
{
    if (node->left != nullptr) {
        VisitNodePostOrder(node->left, result);
    }
    if (node->right != nullptr) {
        VisitNodePostOrder(node->right, result);
    }
    result->Enqueue(node->data);
}

void TreeTraversal::DFTInOrder(BinaryTree tree)
{
    LinkedBasedQueue<int>* result = new LinkedBasedQueue<int>;

    if (tree.root == nullptr) {
        return;
    }
    TreeNode* current = tree.root;
    TreeTraversal::VisitNodeInOrder(current, result);
    result->Display();
}

void TreeTraversal::VisitNodeInOrder(TreeNode* node, LinkedBasedQueue<int>* result)
{
    if (node->left != nullptr) {
        VisitNodeInOrder(node->left, result);
    }
    result->Enqueue(node->data);
    if (node->right != nullptr) {
        VisitNodeInOrder(node->right, result);
    }
}

#endif
