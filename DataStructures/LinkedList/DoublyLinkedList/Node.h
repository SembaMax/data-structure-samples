//
//  Node.h
//  DataStructures
//
//  Created by SeMbA on 8/13/19.
//  Copyright © 2019 SeMbA. All rights reserved.
//

template <class T>
class Node {
public:
    T data;
    Node *next;
    Node *prev;
    
public:
    Node();
    Node(T value);
    Node(T value, Node *nextNode, Node *prevNode);
    ~Node();
};
