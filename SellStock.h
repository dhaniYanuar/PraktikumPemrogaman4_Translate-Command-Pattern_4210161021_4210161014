#pragma once
#include "Order.h"
#ifndef SELLSTOCK_H
#define SELLSTOCK_H
#include <string>
#include <iostream>
using namespace std;

class SellStock : public Order
{
private:
   Stock *abcStock;

public:
   virtual ~SellStock()
   {
	   delete abcStock;
   }
   virtual void execute();
   SellStock(Stock *abcStock);
};

#endif
