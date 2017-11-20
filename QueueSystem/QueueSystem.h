//
// Created by catelemmon on 11/18/17.
//

#ifndef QUEUESYSTEM_QUEUESYSTEM_H
#define QUEUESYSTEM_QUEUESYSTEM_H


#include "ServiceWindow.hpp"
#include "Queue.hpp"

class QueueSystem {

private:

    int total_service_time;
    int window_num;

    int avgStayTime;//用户平均逗留的时间
    int avgCustomersOneMin;//平均每分钟的用户数量

public:

    QueueSystem(int total_service_time, int window_time);

    ~QueueSystem();

    void simlate(int simulate_num);//模拟的次数

    inline double getAvgStayTime() const {
        return avgCustomersOneMin;

    }

    inline double getAvgCustomerOneMin(){
        return avgCustomersOneMin;
    }

private:

    double run();//程序执行一次

    void init();//初始化参数

    void end();//终止模拟 并且清空参数

    int getIdleServiceWindow();//获得空闲窗口的ID

    void customerArrived();//客户到了处理

    void customerDeparture();//客户离开处理

    int total_customer_num;//总的客户数

    ServiceWindow* windows;//窗口数组
    Queue<Customer> customer_list;//客户列表
    Queue<Event>  event_list;//事件列表
    Event* current_event;//当前事件



};


#endif //QUEUESYSTEM_QUEUESYSTEM_H
