//
//  Stack.cpp
//  DataStructures
//
//  Created by SeMbA on 8/13/19.
//  Copyright © 2019 SeMbA. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "ArrayBasedQueue.h"

using namespace std;

template<class T>
ArrayBasedQueue<T>::ArrayBasedQueue(int maxSize)
{
    size = maxSize;
    items = new T[size];
    count = 0;
    front = -1;
    rear = -1;
}

template<class T>
void ArrayBasedQueue<T>::Enqueue(T value)
{
    int newRear = (rear + 1) % size;
    if (newRear == front) {
        return;
    }
    
    items[newRear] = value;
    rear = newRear;
    count++;
}

template<class T>
T ArrayBasedQueue<T>::Dequeue()
{
    if (count == 0) {
        return NULL;
    }
    
    T returnedValue = items[front];
    items[front] = NULL;
    count--;
    if (count == 0) {
        rear = -1;
        front = -1;
        return returnedValue;
    }
    front = (front + 1) % size;
    return returnedValue;
}

template<class T>
void ArrayBasedQueue<T>::Peek()
{
    count << items[front] << endl;
}

template<class T>
void ArrayBasedQueue<T>::Clear()
{
    for (int i = 0; i < count; i++) {
        Dequeue();
    }
}

template<class T>
int ArrayBasedQueue<T>::Count()
{
    return count;
}

template<class T>
void ArrayBasedQueue<T>::Display()
{
    for (int i = front; i < count; i = (i+1)%size) {
        count << items[i] << endl;
    }
}
