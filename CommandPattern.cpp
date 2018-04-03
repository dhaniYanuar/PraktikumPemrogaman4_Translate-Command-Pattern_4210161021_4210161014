#include "CommandPattern.h"
using namespace std;

void CommandPatternDemo::main(std::vector<std::wstring> &args)
{
   Stock *abcStock = new Stock();
   BuyStock *buyStockOrder = new BuyStock(abcStock);
   SellStock *sellStockOrder = new SellStock(abcStock);
   Broker *broker = new Broker();
   broker->takeOrder(buyStockOrder);
   broker->takeOrder(sellStockOrder);
   broker->placeOrders();
}

