#include<iostream>
using namespace std;
int sum(int a,int b){
	return a+b;
}
float number(int a){
	return a;
}
float average(int a, int b,int n){
	float avg =sum(a,b)/number(n);
	return avg;
}
int main(){
	float n1,n2,Avg;
	cout<<"enter two numbers to find average\n";
	cin>>n1;
	cin>>n2;
	Avg=average(n1,n2,2);
	cout<<Avg<<endl;
	return 0;
}