//
//  LinkedBasedStack.cpp
//  DataStructures
//
//  Created by SeMbA on 8/14/19.
//  Copyright © 2019 SeMbA. All rights reserved.
//

#include <iostream>
#include "LinkedBasedStack.h"

using namespace std;

template<class T>
LinkedBasedStack<T>::LinkedBasedStack()
{
    top = NULL;
    count = 0;
}

template<class T>
void LinkedBasedStack<T>::Push(T value)
{
    Node<T> *newNode = new Node<T>;
    newNode->data = value;
    newNode->prev = top;
    top = newNode;
    count++;
}

template<class T>
void LinkedBasedStack<T>::Pop()
{
    if (count == 0) {
        return;
    }
    
    Node<T> *removedNode = top;
    top = top->prev;
    delete removedNode;
    count--;
}

template<class T>
void LinkedBasedStack<T>::Peek()
{
    count << top->data << endl;
}

template<class T>
void LinkedBasedStack<T>::Clear()
{
    for (int i = 0; i < count; i++) {
        Pop();
    }
}

template<class T>
int LinkedBasedStack<T>::Count()
{
    return count;
}

template<class T>
void LinkedBasedStack<T>::Display()
{
    Node<T> *nextNode = top;
    while (nextNode->prev) {
        count << nextNode->data << endl;
        nextNode = nextNode->prev;
    }
}
