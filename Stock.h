#pragma once
#include "Order.h"
#ifndef STOCK_H
#define STOCK_H
#include <string>
#include <iostream>
using namespace std;

class Stock
{
private:
   std::wstring name = L"ABC";
   int quantity = 10;

public:
   virtual void buy();
   virtual void sell();
};

#endif
