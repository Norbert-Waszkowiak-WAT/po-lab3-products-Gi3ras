#ifndef SUPPLIER
#define SUPPLIER
#include "shop.cpp"
using namespace std;
class Supplier {
    private:
    Shop *shop;
    public:
    Supplier(Shop* shop) : shop(shop){}
    void deliverProduct(Product* product){
    shop -> addToStore(product);
    }
};
#endif