#include <iostream>
using namespace std;
const int meal_charge= 792;
int main()
{
	float tax =meal_charge/100*14.25;
	float tax_meal= meal_charge +tax;
	float tip = tax_meal/100*21.02;
	cout<<"cost of meal: "<<meal_charge<<endl;
	cout<< "tax amount: " <<tax<<endl;
	cout<< "tip amount: " <<tip<<endl;
	float total_bill = meal_charge +tax+tip;
	cout <<"total amount : "<<total_bill<<endl;
	return 0;
}