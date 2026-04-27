#include<iostream>
using namespace std;
int main() {
	float unpaid,previousmr, currentmr;
	const int bill=350;
	int result;
	result=0;
	cout<<"Please give your unpaid balance \n";
	cin>>unpaid;
	cout<<"Previous meter reading \n";
	cin>>previousmr;
	cout<<"Current Meter reading \n";
	cin>>currentmr;
	
	if ( unpaid>1 ){
		result= (bill+50)+((currentmr-previousmr)/1000*100)+unpaid
		cout<<"Total Bill= "<<result ;
	}
	else if(unpaid==0){
		result=cout<<"Total Bill= "<<bill+((currentmr-previousmr)/1000*100);
	}
	cout<<result;
	
	return 0;
}