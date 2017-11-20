//
// Created by catelemmon on 11/18/17.
//

#ifndef QUEUESYSTEM_RANDOM_HPP
#define QUEUESYSTEM_RANDOM_HPP


#include <cstdlib>

class Random {

public:
    static double uniform(double max =1 ){
        return ((double)std::rand()/(RAND_MAX))*max;
        //产生[0,max)之间的随机数
    }

};


#endif //QUEUESYSTEM_RANDOM_HPP
