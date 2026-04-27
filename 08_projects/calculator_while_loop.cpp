#include<iostream>
using namespace std;
int main() {
	float num1, num2, result;
	char ope, con = 'y';
	
	while (con == 'Y' || con == 'y')
	{
		cout<<"Enter your first number: ";
		cin>>num1;
		cout<<"Enter your second number: ";
		cin>>num2;
		cout<<"Enter the operator(+,-,*,/)... ";
		cin>>ope;
			switch(ope)
			{
				case '+':
					result = num1 + num2;
					cout<<num1<<" + "<<num2<<" = "<<result<<endl;
					break;
				case '-':
					result = num1 - num2;
					cout<<num1<<" - "<<num2<<" = "<<result<<endl;
					break;
				case '*':
					result = num1 * num2;
					cout<<num1<<" * "<<num2<<" = "<<result<<endl;
					break;
				case '/':
					result = num1 / num2;
					cout<<num1<<" / "<<num2<<" = "<<result<<endl;
					break;
				default:
					cout<<"Invalid Input :( ";
			}
		cout<<"Do you want to continue your calculation? (Y/N): ";
		cin>>con;
	}
	cout<<"Calculator shutting down... GoodBye :) ";


return 0;
}