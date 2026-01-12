#ifndef NOTEBOOK
#define NOTEBOOK
#include "paper_product.cpp"
using namespace std;
class Notebook : public PaperProduct {
    public:
    string getName () override{
        return "Notebook";
    }
};
#endif