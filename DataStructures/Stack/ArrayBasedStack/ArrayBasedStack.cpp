//
//  Stack.cpp
//  DataStructures
//
//  Created by SeMbA on 8/13/19.
//  Copyright © 2019 SeMbA. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "ArrayBasedStack.h"

using namespace std;

template<class T>
ArrayBasedStack<T>::ArrayBasedStack(int maxSize)
{
    size = maxSize;
    items = new T[size];
    count = 0;
    top = -1;
}

template<class T>
void ArrayBasedStack<T>::Push(T value)
{
    if (count >= size) {
        return;
    }
    top = count;
    items[count] = value;
    count++;
}

template<class T>
void ArrayBasedStack<T>::Pop()
{
    if (count == 0) {
        return;
    }
    
    count--;
    items[count] = NULL;
    top = count;
}

template<class T>
void ArrayBasedStack<T>::Peek()
{
    count << items[top] << endl;
}

template<class T>
void ArrayBasedStack<T>::Clear()
{
    for (int i = 0; i < count; i++) {
        Pop();
    }
}

template<class T>
int ArrayBasedStack<T>::Count()
{
    return count;
}

template<class T>
void ArrayBasedStack<T>::Display()
{
    for (int i = 0; i < count; i++) {
        count << items[i] << endl;
    }
}
