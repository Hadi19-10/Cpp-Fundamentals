#include<iostream>
using namespace std;
int main() {
	int marks;
	cout<<"enter your marks \n";
	cin>>marks;
	switch(marks/10){
		case 10:
		case 9:
			cout<<"you got A+ Grade \n";
		break;
		case 8:
			cout<<"you got A Grade \n";
		break;
		case 7:
			cout<<"you got B+ Grade \n";
		break;
		case 6:
			cout<<"you got B Grade \n";
		break;
		default:
			cout<<"you got C grade \n";
	}
	return 0;
}