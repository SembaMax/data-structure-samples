//
//  SinglyLinkedList.cpp
//  DataStructures
//
//  Created by SeMbA on 8/13/19.
//  Copyright © 2019 SeMbA. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "SinglyLinkedList.h"

using namespace std;
    
template <class T>
void SinglyLinkedList<T>::Swap(Node<T> *first, Node<T> *second)
    {
        Node<T> *tmp = first;
        first = second;
        second = tmp;
    }
    

template <class T>
SinglyLinkedList<T>::SinglyLinkedList(void)
    {
        head = NULL;
        tail = NULL;
        length = 0;
    }

template <class T>
void SinglyLinkedList<T>::Add(T value)
    {
        Node<T> *newNode = new Node<T>;
        newNode->data = value;
        newNode->next = NULL;
        
        if (!head) {
            head = newNode;
        }
        else {
            newNode->next = head;
        }
        length++;
    }
    
template <class T>
void SinglyLinkedList<T>::Append(T value)
    {
        Node<T> *newNode = new Node<T>;
        newNode->data = value;
        newNode->next = NULL;
        
        if (!head) {
            head = newNode;
        }
        else {
            Node<T> *current = new Node<T>;
            current = head;
            
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
        tail = newNode;
        length++;
    }
    
template <class T>
void SinglyLinkedList<T>::Pop()
    {
        if (!head) {
            return;
        }
        
        Node<T> *current = new Node<T>;
        current = head;
        
        while (current->next) {
            current = current->next;
        }
        delete current->next;
        tail = current;
        current->next = NULL;
        length--;
    }
    
template <class T>
void SinglyLinkedList<T>::Shift()
    {
        if (!head) {
            return;
        }
        delete head;
        head = head->next;
        length--;
    }
    
template <class T>
T SinglyLinkedList<T>::Get(int atIndex)
    {
        if (atIndex < 0 || atIndex >= length) {
            return NULL;
        }
        
        Node<T> *currentNode = head;
        for (int i = 0; i < atIndex; i++) {
            currentNode = currentNode->next;
        }
        
        return currentNode->data;
    }
    
template <class T>
void SinglyLinkedList<T>::Set(int atIndex, T value)
    {
        if (atIndex < 0 || atIndex >= length) {
            return;
        }
        
        Node<T> *currentNode = head;
        for (int i = 0; i < atIndex; i++) {
            currentNode = currentNode->next;
        }
        
        currentNode->data = value;
    }
    
template <class T>
Node<T>* SinglyLinkedList<T>::GetNode(int atIndex)
    {
        if (atIndex < 0 || atIndex >= length) {
            return NULL;
        }
        
        Node<T> *currentNode = head;
        for (int i = 0; i < atIndex; i++) {
            currentNode = currentNode->next;
        }
        
        return currentNode;
    }
    
template <class T>
void SinglyLinkedList<T>::Insert(int atIndex, T value)
    {
        if (atIndex < 0 || atIndex > length) {
            return;
        }
        
        if (atIndex == 0) {
            Append(value);
        }
        else if (atIndex == length)
        {
            Add(value);
        }
        else
        {
            Node<T> *newNode = new Node<T>;
            newNode->data = value;
            
            Node<T> *prevNode = GetNode(atIndex - 1);
            
            newNode->next = prevNode->next;
            prevNode->next = newNode;
        }
        length++;
    }
    
template <class T>
void SinglyLinkedList<T>::Remove(int atIndex)
    {
        if (atIndex < 0 || atIndex >= length) {
            return;
        }
        
        if (atIndex == 0) {
            Shift();
        }
        else if (atIndex == length - 1){
            Pop();
        }
        else
        {
            Node<T> *prevNode = GetNode(atIndex - 1);
            Node<T> *removedNode = prevNode->next;
            prevNode->next = removedNode->next;
            delete removedNode;
            length--;
        }
    }
    
template <class T>
void SinglyLinkedList<T>::Reverse()
    {
        swap(tail, head);
        Node<T> *nextNode;
        Node<T> *prevNode = NULL;
        Node<T> *currentNode = tail;
        //Node *tmpNode = tail;
        
        for (int i = 0; i < length; i++) {
            nextNode = currentNode->next;
            currentNode->next = prevNode;
            prevNode = currentNode;
            currentNode = nextNode;
        }
        
        //Alternative with while
        /*while (tmpNode) {
         tmpNode = nextNode ->  next;
         currentNode->next = prevNode;
         prevNode = currentNode;
         currentNode = nextNode ->  next;
         };*/
    }
    
template <class T>
void SinglyLinkedList<T>::Display()
    {
        Node<T> *currentNode = head;
        for (int i = 0; i < length; i++) {
            cout << currentNode->data << " -> " ;
            currentNode = currentNode->next;
        }
    }

