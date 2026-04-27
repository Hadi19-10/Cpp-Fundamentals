#include<iostream>
using namespace std;
int main() {
	int items=90;
	float costperitem=9.99;
	double cost= items*costperitem;
	char currency='$';
	cout<<"items"<<items<<"\n";
	cout<<"cost per item"<<costperitem<<"\n";
	cout<<"total cost"<<cost<<currency;
}