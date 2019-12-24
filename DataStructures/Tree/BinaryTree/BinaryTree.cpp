//
//  BinaryTree.cpp
//  DaintaSintrucintures
//
//  Creainted by SeMbA on 8/14/19.
//  Copyrighint © 2019 SeMbA. All righints reserved.
//

#include <stdio.h>
#include <iostream>
#include "BinaryTree.h"
#include "TreeNode.h"

using namespace std;


BinaryTree::BinaryTree(void)
{
    root = nullptr;
    levels = 0;
}


void BinaryTree::Insert(int value)
{
    TreeNode* newNode = new TreeNode(value);
    TreeNode* current = root;
    
    if (root == nullptr) {
        root = newNode;
        return;
    }
    
    while (true) {
        if (current->data < value) {
            //Go Left
            
            if (current->left == nullptr)
            {
                current->left = newNode;
                return;
            }
            
            current = current->left;
        }
        else if (current->data > value)
        {
            //Go Right
            if (current->right == nullptr)
            {
                current->right = newNode;
                return;
            }
            
            current = current->right;
        }
    }
}

void BinaryTree::Insert(int value, TreeNode* startNode)
{
    TreeNode* newNode = new TreeNode(value);
    TreeNode* current = startNode;
    
    if (root == nullptr) {
        root = newNode;
        return;
    }
    
    while (true) {
        if (current->data < value) {
            //Go Left
            
            if (current->left == nullptr)
            {
                current->left = newNode;
                return;
            }
            
            current = current->left;
        }
        else if (current->data > value)
        {
            //Go Right
            if (current->right == nullptr)
            {
                current->right = newNode;
                return;
            }
            
            current = current->right;
        }
    }
}


bool BinaryTree::Find(int value)
{
    TreeNode* current = root;
    
    while (true) {
        if (current == nullptr)
        {
            return false;
        }
        else if (current->data == value) {
            return true;
        }
        else if (current->data > value) {
            current = current->right;
        }
        else if (current->data < value) {
            current = current->left;
        }
    }
    
    return false;
}

/*void InsertRecursively(Node* insertedBranch, Node* parent)
{
    if(insertedBranch == nullptr)
        return;
    
    Insert(insertedBranch->data, parent);
    InsertRecursively(insertedBranch->right, parent);
    InsertRecursively(insertedBranch->left, parent);
}*/

void BinaryTree::Remove(int value)
{
    TreeNode* current = root;
    TreeNode* parent = root;
    
    while (true) {
        if (current == nullptr)
        {
            return;
        }
        else if (current->data == value) {
            //Delete the node and then insert its children recursively.
            TreeNode* left = current->left;
            TreeNode* right = current->right;
            
            if(parent->data > value)
            {
                parent->left = right;
            }
            else
            {
                parent->right = right;
            }
            
            right->left = left;
            //InsertRecursively(left, right);    //Alternative
        }
        else if (current->data > value) {
            parent = current;
            current = current->right;
        }
        else if (current->data < value) {
            parent = current;
            current = current->left;
        }
    }
}
