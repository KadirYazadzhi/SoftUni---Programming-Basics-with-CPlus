#include <iostream>
#include <string>
using namespace std;

int main()
{
    const double DOG_FOOD_PRICE = 2.5;
    const double CAT_FOOD_PRICE = 4.0;

    int dogFoodCount = 0;
    int catFoodCount = 0;

    cin >> dogFoodCount >> catFoodCount;

    cout << dogFoodCount * DOG_FOOD_PRICE + catFoodCount * CAT_FOOD_PRICE << " lv.";



}
