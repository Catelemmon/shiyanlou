
// Created by catelemmon on 11/18/17.
//

#ifndef QUEUESYSTEM_CUSTOMNODE_H
#define QUEUESYSTEM_CUSTOMNODE_H


#include "Random.hpp"

//#define
const int RANDOM_PARAMETER=100;



struct Node{

    int arrive_time;//客户到达的时间

    int duration; //客户滞留的时间
    struct Node *next;

    Node(int arrive_time = 0, int duration = Random::uniform(RANDOM_PARAMETER))
            :arrive_time(arrive_time),duration(duration),next(nullptr){}

};

typedef struct Node Node;
typedef struct Node Customer;


#endif //QUEUESYSTEM_CUSTOMNODE_H
