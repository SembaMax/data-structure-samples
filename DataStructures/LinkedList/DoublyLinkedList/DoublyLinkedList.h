//
//  DoublyLinkedList.h
//  DataStructures
//
//  Created by SeMbA on 8/14/19.
//  Copyright © 2019 SeMbA. All rights reserved.
//

#include "Node.h"

template <class T>
class DoublyLinkedList {
    
private:
    Node<T> *head;
    Node<T> *tail;
    int length;
    
public:
    DoublyLinkedList(void);
    ~DoublyLinkedList(void);
    void Add(T value);
    void Append(T value);
    void Pop();
    void Shift();
    T Get(int atIndex);
    void Set(int atIndex, T value);
    void Insert(int atIndex, T value);
    void Remove(int atIndex);
    void Reverse();
    void Display(); //Traverse
    
private:
    void Swap(Node<T> *first, Node<T> *second);
    Node<T>* GetNode(int atIndex);
};
