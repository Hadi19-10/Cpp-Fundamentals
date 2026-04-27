#include<iostream>
using namespace std;
int main() {
	int choice,subchoice;
	cout<<"\t--Vending machine-- \n";
	cout<<"Press 1 for Beverages \n";
	cout<<"Press 2 for Snacks \n";
	cout<<"Press 3 for Chocolates \n";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"Which Beverage you want to choose\n";
			cout<<"Press 1 for 7up \n";
			cout<<"Press 2 for Coke \n";
			cout<<"Press 3 for Marinda \n";
			cout<<"Press 4 for Mountain Dew \n";
			cin>>subchoice;
			switch(subchoice){
				case 1:
					cout<<"you Selected 7up! Thanks for Buying \n";
				break;
				case 2:
					cout<<"you Selected Coke! Thanks for Buying \n";
				break;
				case 3:
					cout<<"you Selected Marinda! Thanks for Buying \n";
				break;
				case 4:
					cout<<"you Selected Mountain Dew! Thanks for Buying \n";
			}
		break;
		case 2:
			cout<<"Which snack do you want to choose \n";
			cout<<"Press 1 for Lays \n";
			cout<<"Press 2 for Snacker \n";
			cout<<"Press 3 for Dimanche's \n";
			cin>>subchoice;
			switch(subchoice){
				case 1:
					cout<<"you Selected Lays! Thanks for Buying \n";
				break;
				case 2:
					cout<<"you Selected Snacker! Thanks for Buying \n";
				break;
				case 3:
					cout<<"you Selected Dimanche's! Thanks for Buying \n";
			}
		break;
		case 3:
		    cout<<"You have selected Chocolate";	
			
	}
}