//
//  Node.hpp
//  DataStructures
//
//  Created by SeMbA on 8/14/19.
//  Copyright © 2019 SeMbA. All rights reserved.
//

template <class T>
class Node {
public:
    T data;
    Node *prev;
    
public:
    Node();
    Node(T value);
    Node(T value, Node *prevNode);
    ~Node();
};
