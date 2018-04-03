#pragma once
#ifndef ORDER_H
#define ORDER_H
#include <string>
#include <iostream>
using namespace std;

class Order
{
   public:
   virtual void execute() = 0;
};

#endif
