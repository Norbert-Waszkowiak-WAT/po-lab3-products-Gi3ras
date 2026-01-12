#ifndef BREAD
#define BREAD
#include "food_product.cpp"
using namespace std;
 
class Bread : public FoodProduct {
    public:
    string getName () override{
        return "Bread";
    }
};
#endif