#include<iostream>
using namespace std;
int main () {
	char choice;
	float result;
	int num1, num2;
	char mn;
	cout << "choose among a, b, c, d and e \n";
	cout<< " a > Addition \n b > Subtraction \n c > Multiplication \n d > Division \n e > Modulus\n";
	cin>>choice;
	cout <<"enter First Number \n";
	cin >>num1;
	cout << "enter second Number\n";	
	cin>>num2;
	switch (choice)
	{
		case 'a':
			cout<< "your result is: "<<num1 + num2;
			break;
		case 'b':
			cout<<"your result is: "<<num1 - num2;
			break;
		case 'c':
			cout<<"your result is: "<<num1 * num2;
			break;
		case 'd':
			cout<<"your result is: "<< num1/num2;
			break;
		case 'e' :
			cout<<"your result is: "<<num1%num2;
			break;
		default:
			cout<<"you choose the \"WRONG\" Character ";
	}
}