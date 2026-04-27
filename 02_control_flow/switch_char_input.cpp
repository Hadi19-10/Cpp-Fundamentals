#include<iostream>
using namespace std;

int main () {
	char choice;
	cout<<"Enter A,B or C \n";
	cin>>choice;
	switch (choice)
	{
		case 'a':
		case 'A': cout<<"you entered A. \n";
		break;
		case 'b':
		case 'B': cout<<"you entered B.\n";
		break;
		case 'c':
		case 'C': cout<< "you entered C.\n ";
		break;
		default: cout<<"you did not entered A, B or C";
	}
	return 0;
}