#include "BuyStock.h"
using namespace std;

BuyStock::BuyStock(Stock *abcStock)
{
   this->abcStock = abcStock;
}

void BuyStock::execute()
{
   abcStock->buy();
}

