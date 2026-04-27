#include<iostream>
using namespace std;
int main() {
	int number;
	number=0;
	cout<<"enter a number "<<endl;
	cin>>number;
	int function= (number%2);
	if(function==1){
	cout<<"your number is odd "<<endl;
	}
	else {
		cout<<"your number is even";
	}
	
}