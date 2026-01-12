#ifndef PEN
#define PEN
#include "product.cpp"
using namespace std;
 
class Pen : public Product{
    public:
    string getName() override{
        return "Pen";
    }
};
#endif