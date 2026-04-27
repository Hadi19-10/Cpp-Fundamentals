#include<iostream>
using namespace std;
int add(int a, int b){
	return a+b;
}
int sub(int a, int b){
	return a-b;
}
int mul(int a, int b){
	return a*b;
}
int division(int a, int b){
	return a/b;
}
int main(){
	int a,b;
	cout<<"enter a number for addition\n";
	cin>>a;
	cout<<"enter second number\n";
	cin>>b;
	int sum=add(a,b);
	cout<<sum<<endl;
	cout<<"enter a number for subtraction\n";
	cin>>a;
	cout<<"enter second number\n";
	cin>>b;
	int subtract=sub(a,b);
	cout<<subtract<<endl;
	cout<<"enter a number for multiplication\n";
	cin>>a;
	cout<<"enter second number\n";
	cin>>b;
	int multiply=mul(a,b);
	cout<<multiply<<endl;
	cout<<"enter a number for division\n";
	cin>>a;
	cout<<"enter second number\n";
	cin>>b;
	int divide=division(a,b);
	cout<<divide<<endl;
	return 0;
}