#include <iostream>
using namespace std;
int main() {
	int subject,marks;
	cout<<"Which Subject marks you want to display \n";
	cout<<"Press 1 for ICT marks \n";
	cout<<"Press 2 for PF marks \n";
	cout<<"Press 3 to display OOP Marks \n";
	cin>>subject;
	switch(subject) {
		case 1:
			cout<<"enter your ICT Marks \n";
			cin>>marks;
			cout<< "You got "<<marks << " marks in ICT \n";
		break;
		case 2:
			cout<<"enter you PF marks \n";
			cin>>marks;
			cout<< "You got "<<marks << " marks in PF \n";
		break;
		case 3:
			cout<<"enter your OOP marks \n";
			cin>> marks;
			cout<< "You got "<<marks << " marks in OOP \n";
		default:
			cout<<"invalid entry \n";
	}
}