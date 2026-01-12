#ifndef PRODUCT 
#define PRODUCT
#include<string>

using namespace std;

class Product{
    public:
    virtual string getProductType()=0;
    virtual string getName()= 0;
};
#endif