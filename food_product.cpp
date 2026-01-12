#ifndef FOOD_PRODUCT
#define FOOD_PRODUCT

#include "product.cpp"

using namespace std;
class FoodProduct : public Product{
    public:
string getProductType() override {
    return "FoodProduct";
}
};
#endif
