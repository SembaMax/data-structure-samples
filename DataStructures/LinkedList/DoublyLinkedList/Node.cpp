//
//  Node.cpp
//  DataStructures
//
//  Created by SeMbA on 8/13/19.
//  Copyright © 2019 SeMbA. All rights reserved.
//

#include <stdio.h>
#include "Node.h"

template <class T>
Node<T>::Node()
{
    data = NULL;
    next = NULL;
    prev = NULL;
}

template <class T>
Node<T>::Node(T value)
{
    data = value;
    next = NULL;
    prev = NULL;
}

template <class T>
Node<T>::Node(T value, Node *nextNode, Node *prevNode)
{
    data = value;
    next = nextNode;
    prev = prevNode;
}
