#include<iostream>
using namespace std;
int main () {
	int purchaseamount, finalamount;
	char membership;
	cout<<"Please enter the total Purchase Amount \n";
	cin>>purchaseamount;
	cout<<"Are you already a Member?(Y/N) ";
	cin>>membership;
	if (membership=='Y' || membership=='y'){
		if(purchaseamount>=10000){
			finalamount=purchaseamount-(purchaseamount/100*20);
			cout<<"You got 20% discount and your amount is : "<<finalamount<<endl;
		}else if(purchaseamount>=5000){
			finalamount=purchaseamount-(purchaseamount/100*10);
			cout<<"You got 10% discount and your Final Amount is: "<<finalamount<<endl;
			}
		else if(purchaseamount<5000){
			finalamount=purchaseamount-(purchaseamount/100*5);
			cout<<"You got 5% discount and your Final Amount is: "<<finalamount<<endl;
			}
		}
	else {if(membership=='N' || membership=='n'){ 
	        if(purchaseamount>=10000){
	        	finalamount=purchaseamount-(purchaseamount/100*10);
	        	cout<<"You got 10% discount your final amount is: "<<finalamount<<endl;
			}
			else cout<<"your total amount is : "<<purchaseamount<<endl;	
	}
	}
	return 0;
}