#include "Broker.h"
#include <iostream>
#include<vector>
using namespace std;

void Broker::takeOrder(Order *order)
{
   orderList.push_back(order);
}

void Broker::placeOrders(Order *order)
{
   for (auto i = orderlist.begin() ; i != orderList.end(); ++i)
   {
	  order->execute();
   }
   orderList.clear();
}
