//
//  Node.cpp
//  DataStructures
//
//  Created by SeMbA on 8/14/19.
//  Copyright © 2019 SeMbA. All rights reserved.
//

#include <stdio.h>
#include "Node.h"

template <class T>
Node<T>::Node()
{
    data = NULL;
    next = NULL;
}

template <class T>
Node<T>::Node(T value)
{
    data = value;
    next = NULL;
}

template <class T>
Node<T>::Node(T value, Node *nextNode)
{
    data = value;
    next = nextNode;
}
