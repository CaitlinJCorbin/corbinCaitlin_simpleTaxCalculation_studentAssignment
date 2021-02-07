/* Program name: Restaurant_Bill.cpp
*  Author: Caitlin J. Corbin
*  Date last updated: 01/25/2020
* Purpose: Informs a user of their meal charge.
*/

#include <iostream>

using namespace std;

int main()
{
    double Meal_Price; //declares variables
    double Tax;
    double Tip;
    double Total;

    Meal_Price = 10.00; //sets meal price

    Tax = Meal_Price * 0.0675; //finds tax amount
    Meal_Price = Meal_Price + Tax; //adds tax to meal price
    Tip = Meal_Price * 0.20; //finds tip
    Total = Meal_Price + Tip; //calculates total

        cout << "Your meal cost: $" << Meal_Price << endl; //displays data to user
        cout << "Your tax is: $" << Tax << endl;
        cout << "The tip is: $" << Tip << endl;
        cout << "Your total is: $" << Total << endl;

        return 0; //end
}
