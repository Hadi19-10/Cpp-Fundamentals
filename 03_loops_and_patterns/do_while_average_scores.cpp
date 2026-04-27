#include<iostream>
using namespace std;
int main() {
	float score1, score2, score3, average;
	char again;
	do {
		cout<<"enter your three scores to find out average \n";
		cin>>score1 >>score2>> score3;
		average = (score1+score2+score3)/3.0;
		cout<<"there average is : "<<average<<endl;
		cout<<"do you want to find average again (y/n) \n";
		cin>>again;
	}
	while (again =='y' || again =='Y');
	cout<<"see you next time :) ";
	return 0;
}