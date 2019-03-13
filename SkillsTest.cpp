#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    double payRate, grossIncome, netIncome, schoolAmount, bondsAmount;
    double clothesAmount, parentsBondsAmount, hoursWorked;
    
    const double tax_rate = 0.14;
    const double clothes_income = 0.10;
    const double school_income = 0.01;
    const double savings_income = 0.25;
    const double parents_amount = 0.50;
    
    cout << "How many hours did you work:";
    cin >> hoursWorked;
  
    cout << "What was the hourly rate:";
    cin >> payRate;
    
    grossIncome = hoursWorked * payRate;
    netIncome = grossIncome *= tax_rate;
    clothesAmount = netIncome * clothes_income;
    schoolAmount = netIncome * school_income;
    netIncome = (clothesAmount + schoolAmount); 
	
	
    bondsAmount = netIncome * savings_income;
    parentsBondsAmount = bondsAmount * parents_amount;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "Gross Income: $" << grossIncome << endl;
    cout << "Net Income: $" << netIncome << endl;
    cout << "Clothes & Accessories: $" << clothesAmount << endl;
    cout << "School Supplies: $" << schoolAmount << endl;
    cout << "Savings Bonds: $" << bondsAmount << endl;
    cout << "Parents Bonds Co-Contribution: $" <<parentsBondsAmount << endl;
    
    _getch();
    return 0;
}
