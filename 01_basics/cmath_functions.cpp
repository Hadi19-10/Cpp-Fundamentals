#include <iostream>
#include<cmath>
using namespace std;

int main() {
	float a=50.87654, b= 74.99399;
	float sum= a+b;
	cout<<"before round off " << sum<<endl;
	cout<< "after round off " << round (sum)<< endl;
	cout<<"Square root : "<< sqrt(sum)<<endl;
	cout<<"Log : "<< log(sum);
	return 0;
}