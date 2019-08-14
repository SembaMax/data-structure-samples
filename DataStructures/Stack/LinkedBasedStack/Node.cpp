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
    prev = NULL;
}

template <class T>
Node<T>::Node(T value)
{
    data = value;
    prev = NULL;
}

template <class T>
Node<T>::Node(T value, Node *prevNode)
{
    data = value;
    prev = prevNode;
}
