//
//  DoublyLinkedList.cpp
//  DataStructures
//
//  Created by SeMbA on 8/13/19.
//  Copyright © 2019 SeMbA. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "DoublyLinkedList.h"

using namespace std;

template <class T>
void DoublyLinkedList<T>::Swap(Node<T> *first, Node<T> *second)
    {
        Node<T> *tmp = first;
        first = second;
        second = tmp;
    }
    

template <class T>
DoublyLinkedList<T>::DoublyLinkedList(void)
    {
        head = NULL;
        tail = NULL;
        length = 0;
    }
    
template <class T>
void DoublyLinkedList<T>::Add(T value)
    {
        Node<T> *newNode = new Node<T>;
        newNode->data = value;
        newNode->prev = NULL;
        newNode->next = NULL;
        
        if (!head) {
            head = newNode;
        }
        else {
            head->prev = newNode;
            newNode->next = head;
        }
        length++;
    }
    
template <class T>
void DoublyLinkedList<T>::Append(T value)
    {
        Node<T> *newNode = new Node<T>;
        newNode->data = value;
        newNode->prev = NULL;
        newNode->next = NULL;
        
        if (!head) {
            head = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        length++;
    }
    
template <class T>
void DoublyLinkedList<T>::Pop()
    {
        if (!head) {
            return;
        }
        Node<T> *newTail = tail->prev;
        tail->prev = NULL;
        delete tail;
        tail = newTail;
        length--;
    }
    
template <class T>
void DoublyLinkedList<T>::Shift()
    {
        if (!head) {
            return;
        }
        delete head;
        head = head->next;
        length--;
    }
    
template <class T>
T DoublyLinkedList<T>::Get(int atIndex)
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
void DoublyLinkedList<T>::Set(int atIndex, T value)
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
Node<T>* DoublyLinkedList<T>::GetNode(int atIndex)
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
void DoublyLinkedList<T>::Insert(int atIndex, T value)
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
            Node<T> *nextNode = prevNode->next;
            
            newNode->next = nextNode;
            nextNode->prev = newNode;
            
            prevNode->next = newNode;
            newNode->prev = prevNode;
        }
        length++;
    }
    
template <class T>
void DoublyLinkedList<T>::Remove(int atIndex)
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
            Node<T> *nextNode = removedNode->next;
            
            prevNode->next = nextNode;
            nextNode->prev = prevNode;
            
            delete removedNode;
            length--;
        }
    }
    
template <class T>
void DoublyLinkedList<T>::Reverse()
    {
        swap(tail, head);
        Node<T> *nextNode;
        Node<T> *prevNode = NULL;
        Node<T> *currentNode = tail;
        
        for (int i = 0; i < length; i++) {
            nextNode = currentNode->next;
            currentNode->next = prevNode;
            currentNode->prev = nextNode;
            prevNode = currentNode;
            currentNode = nextNode;
        }
    }
    
template <class T>
void DoublyLinkedList<T>::Display()
    {
        Node<T> *currentNode = head;
        for (int i = 0; i < length; i++) {
            cout << currentNode->data << " -> " ;
            currentNode = currentNode->next;
        }
    }

