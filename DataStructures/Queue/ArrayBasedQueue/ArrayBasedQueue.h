//
//  ArrayBasedStack.h
//  DataStructures
//
//  Created by SeMbA on 8/14/19.
//  Copyright © 2019 SeMbA. All rights reserved.
//

//LIFO
template<class T>
class ArrayBasedQueue
{
private:
    int front;
    int rear;
    int size;
    int count;
    T *items;
    
public:
    ArrayBasedQueue(int maxSize);
    ~ArrayBasedQueue(void);
    void Enqueue(T value);
    T Dequeue();
    int Count();
    void Clear();
    void Display();
    void Peek();
};
