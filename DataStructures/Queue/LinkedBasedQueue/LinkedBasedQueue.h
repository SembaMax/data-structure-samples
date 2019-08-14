//
//  LinkedBasedStack.hpp
//  DataStructures
//
//  Created by SeMbA on 8/14/19.
//  Copyright © 2019 SeMbA. All rights reserved.
//

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
    void Dequeue();
    int Count();
    void Clear();
    void Display();
    void Peek();
};
