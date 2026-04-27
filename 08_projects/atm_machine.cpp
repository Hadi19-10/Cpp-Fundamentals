#include<iostream>
using namespace std;
int main () {
	int cash=20000,choice;
	long deposit, withdraw;
	char start='y';
	
	while (start=='y' || start=='Y'){
		cout<<"\t ATM \n";
		cout<<"Press 1 to check Balance \n";
		cout<<"Press 2 to Deposit amount \n";
		cout<<"Press 3 to Withdraw amount \n";
		cout<<"Press 4 to Exit \n";
		cin>>choice;
		switch(choice) {
			case 1:
				cout<< "your balance is: "<< cash<<endl;
			break;
			case 2:
				cout<<"Please enter amount you want to deposit \n";
				cin>>deposit;
				cout<<"Amount deposited \n";
				cash=cash+deposit;
			break;
			case 3:
				cout<<"Please enter amount you want to withdraw \n";
				cin>>withdraw;
				if(withdraw>cash) {
					cout<<"insufficent balance \n";
				}
				else {
					cout<<"cash withdrawn! \n";
					cash=cash-withdraw;
				}
			break;
			case 4:
				cout<<"\n Thanks for Visiting \n";
				return 0;
			break;
			default:
				cout<<"Invalid entry! enter correct number \n";
		}
	cout<<"do you want to perform more transactions? (y/n)\n";
	cin>>start;
	}
	cout<<"\n\n\tSee you again :)";
	return 0;
}