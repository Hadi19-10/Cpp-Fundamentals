#include<iostream>
using namespace std;
int main () {
	float temp;
	cout<<"enter the substance Temperature \n";
	cin>> temp;
	while(temp>102.5){
		cout<< "temperature is too high turn the thermostat down ";
		cout<< "then report again after 5 Minutes \n";
		cin >>temp;
	}
	cout<<"Temoerature is acceptable do check it after 15 minutes";
	return 0;
}