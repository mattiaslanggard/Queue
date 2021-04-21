#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"

template <typename T>
class Queue
{
private:
    int m_count;
    Node<T>* m_front;
    Node<T>* m_back;

public:
    Queue();
    bool IsEmpty();
    T* Front();
    void Enqueue(T val);
    void Dequeue();
};

template <typename T>
Queue<T>::Queue() : m_count(0), m_front(nullptr), m_back(nullptr) {}

#endif