//
// Created by catelemmon on 11/18/17.
//

#ifndef QUEUESYSTEM_SERVICEWINDOW_HPP
#define QUEUESYSTEM_SERVICEWINDOW_HPP


#include <cstdint>
#include "CustomNode.h"

class ServiceWindow {
protected:
    //Windows Status 窗口当前的状态
    enum Window_status{
        SERVICE, //正在服务
        IDLE, //空闲阶段
    };

    Window_status windowStatus;

public:
    inline ServiceWindow(){
        windowStatus =IDLE;
    }

    inline bool isIdle() const{
        if (windowStatus == IDLE) {
            return true;
        }
        return false;
    }

    inline void serveCustomer(Customer &customer){
        this->customer=customer;
    }

    inline void setBusy(){
        windowStatus=SERVICE;
    }

    inline void setIdle(){
        windowStatus=IDLE;
    }

    inline int  getCustomerArriveTime() const {
        return customer.arrive_time;
    }

    inline int  getCustomerDuration() const {
        return  customer.duration;
    }


protected:
    Customer customer;
};



#endif //QUEUESYSTEM_SERVICEWINDOW_HPP
