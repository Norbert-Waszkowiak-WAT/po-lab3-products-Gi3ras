#ifndef MINERAL_WATER
#define MINERAL_WATER
#include "food_product.cpp"
using namespace std;
 
class MineralWater : public FoodProduct{
    public:
    string getName() override{
        return "MineralWater";
    }
};
#endif