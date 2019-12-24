//
//  LinkedBasedStack.hpp
//  DataStructures
//
//  Created by SeMbA on 8/14/19.
//  Copyright © 2019 SeMbA. All rights reserved.
//
#ifndef LinkedBasedQueue_h
#define LinkedBasedQueue_h

#include"Node.h"
//LIFO
template<class T>
class LinkedBasedQueue
{
private:
    int count;
    Node<T> *front, *rear;
    
public:
    LinkedBasedQueue();
    ~LinkedBasedQueue(void);
    void Enqueue(T value);
    T Dequeue();
    int Count();
    void Clear();
    void Display();
    void Peek();
};

#endif /* LinkedBasedQueue_h */
