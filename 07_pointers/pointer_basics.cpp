#include<iostream>
using namespace std;
void geto(int &Order){
	cin>>Order;
}
int main(){
	int a=6;
	int *ptr;
	ptr=&a;
	cout<<"address of a "<<ptr<<endl;
	cout<<"value of a "<<*ptr<<endl;
	*ptr=100;
	cout<<"value of a "<< a<<endl;
	return 0;
}