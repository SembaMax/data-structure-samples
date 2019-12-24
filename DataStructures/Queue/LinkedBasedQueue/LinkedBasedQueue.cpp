//
//  LinkedBasedStack.cpp
//  DataStructures
//
//  Created by SeMbA on 8/14/19.
//  Copyright © 2019 SeMbA. All rights reserved.
//

#include <iostream>
#include "LinkedBasedQueue.h"

using namespace std;

template<class T>
LinkedBasedQueue<T>::LinkedBasedQueue()
{
    front = NULL;
    rear = NULL;
    count = 0;
}

template<class T>
void LinkedBasedQueue<T>::Enqueue(T value)
{
    Node<T> *newNode = new Node<T>;
    newNode->data = value;
    newNode->next = NULL;
    if (count == 0) {
        front = rear = newNode;
    }
    else {
    rear->next = newNode;
    }
    count++;
}

template<class T>
T LinkedBasedQueue<T>::Dequeue()
{
    if (count == 0) {
        return NULL;
    }
    
    Node<T> *removedNode = front;
    front = front->next;
    delete removedNode;
    count--;
    return removedNode->data;
}

template<class T>
void LinkedBasedQueue<T>::Peek()
{
    count << front->data << endl;
}

template<class T>
void LinkedBasedQueue<T>::Clear()
{
    for (int i = 0; i < count; i++) {
        Dequeue();
    }
}

template<class T>
int LinkedBasedQueue<T>::Count()
{
    return count;
}

template<class T>
void LinkedBasedQueue<T>::Display()
{
    Node<T> *nextNode = front;
    while (nextNode->prev) {
        count << nextNode->data << endl;
        nextNode = nextNode->prev;
    }
}
