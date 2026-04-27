#include <iostream>
using namespace std;
int main() {
	int marks;
	marks=0;
	cout<<"enter your marks \n";
	cin>>marks;
	if (marks>50){
		if (marks>60) {
			if (marks>70) {
				if(marks>80) {
					if (marks >90) {
						cout<<"your grade is A* ";
					}
					else {
					cout<<"your grade is A ";}
				}
				else cout<<"your grade is B* ";
			}
			else cout<<"Your Grade is B ";
		}    
		else cout<<"your grade is C* ";
	}
	else cout<<"Your grade is C ";
	return 0;
	}
	
	