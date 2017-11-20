//
// Created by catelemmon on 11/18/17.
//

#ifndef QUEUESYSTEM_QUEUESYSTEM_HPP
#define QUEUESYSTEM_QUEUESYSTEM_HPP

#include "Event.h"

template <typename  T>
class Queue{

public:

    Queue();
    ~Queue();

    void clearQueue();

    T *enqueue(T &node);

    T* dequeue();

    T *orderEnqueue(Event &event);

    int length();

private:

    T *front; //头结点

    T *rear; //队尾


};


#endif //QUEUESYSTEM_QUEUESYSTEM_HPP
