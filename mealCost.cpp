#include <iostream>
using namespace std;

int main(){
    float meal_charge = 88.67;
    float tax = 0.667;
    float tax_on_meal = 88.67/tax; //calculating tax on meal
    float tip;
    tip = 20.0;
    meal_charge = tax_on_meal + 88.67; //cost on meal along with tax
    float total_tip_cost = meal_charge/20; //tip amount
    float meal_cost = meal_charge + total_tip_cost; //total meal cost
    cout << "Meal Cost = " << meal_cost << endl;
    cout << "Tax Amount = " << tax_on_meal << endl;
    cout << "Tip = " << total_tip_cost << endl;
    cout << "Total bill = " << meal_cost + tax_on_meal + total_tip_cost << endl;
    return 0;
}