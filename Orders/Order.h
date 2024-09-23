#ifndef ORDER_H
#define ORDER_H
#include <string>
#include <iostream>
#include <vector>

class Order {
public:
    //Default constructor included automatically
    virtual bool validate() = 0;
    virtual void execute() = 0;
    virtual void summary() = 0;
};

#endif
