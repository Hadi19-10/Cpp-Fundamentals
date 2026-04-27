#include <iostream>
using namespace std;
int main() {
	float C =30;
	cout<<"temperature in celsius is " <<C<<"Celsius" << endl;
	float conversion;
	conversion = (C * 9/5)+32;
	cout<<"Conversion in Faherenheit is" <<conversion << endl <<endl;
	float F=71;
	cout<<"temperature in Faharenheit is " << F<<"F" << endl;
	float Conversion;
	Conversion = (F-32)*5/9;
	cout<<"Conversion in Celsius is" <<Conversion <<"C";
	
}