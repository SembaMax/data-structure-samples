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
class LinkedBasedStack
{
private:
    int count;
    Node<T> *top;
    
public:
    LinkedBasedStack();
    ~LinkedBasedStack(void);
    void Push(T value);
    void Pop();
    int Count();
    void Clear();
    void Display();
    void Peek();
};
