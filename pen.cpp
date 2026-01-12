#ifndef PEN
#define PEN
#include "paper_product.cpp"
using namespace std;
 
class Pen : public PaperProduct{
    public:
    string getName() override{
        return "Pen";
    }
};
#endif