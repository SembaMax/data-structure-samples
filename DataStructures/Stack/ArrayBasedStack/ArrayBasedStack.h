//
//  ArrayBasedStack.h
//  DataStructures
//
//  Created by SeMbA on 8/14/19.
//  Copyright © 2019 SeMbA. All rights reserved.
//

//LIFO
template<class T>
class ArrayBasedStack
{
private:
    int top;
    int size;
    int count;
    T *items;
    
public:
    ArrayBasedStack(int maxSize);
    ~ArrayBasedStack(void);
    void Push(T value);
    void Pop();
    int Count();
    void Clear();
    void Display();
    void Peek();
};
