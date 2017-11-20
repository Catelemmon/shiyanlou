//
// Created by catelemmon on 11/18/17.
//

#ifndef QUEUESYSTEM_EVENT_H
#define QUEUESYSTEM_EVENT_H


#include "Random.hpp"

const RANDOM_PARAMETER=100;

struct Event{

    int occur_time;

    int event_type;

    Event* next;

    Event(int occurtime=Random::uniform(RANDOM_PARAMETER),int event_type=-1):
            occur_time(occurtime),event_type(event_type),next(nullptr){}


};

#endif //QUEUESYSTEM_EVENT_H
