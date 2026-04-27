#include<iostream>
using namespace std;
int main() {
	float marks;
	marks=0;
	cout<< "enter your marks out of 100 = "<<endl;
	cin>>marks;
	if(marks>100) {
		cout <<"invalid entry"<<endl;
		cin>>marks;
	}
	else {if( marks>=90)
	{
		cout<<"your grade is \"A\"";
	 } 
	 else {if( marks>=80)
	{
		cout<<"your grade is \"B\"";
	 } 
	 else {if( marks>=70)
	{
		cout<<"your grade is \"C\"";
	 } 
	 else {if( marks>=60)
	{
		cout<<"your grade is \"D\"";
	 } 
	 else {if( marks<=60)
	{
		cout<<"your grade is \"F\"";
	 } 
}
}
}
}
}
}