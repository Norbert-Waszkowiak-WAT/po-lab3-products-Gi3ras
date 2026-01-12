#ifndef PAPER_PRODUCT
#define PAPER_PRODUCT
#include "product.cpp"
 
using namespace std;
class PaperProduct : public Product {
    public:
    string getProductType () override {
        return "PaperProduct" ;
    }
};
#endif