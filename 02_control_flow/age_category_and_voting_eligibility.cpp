/*Problem:
Input age of a person. Print:
 “Eligible to vote” if age ≥ 18
 “Not eligible to vote” if age &lt; 18
 “Teenager” if 13 ≤ age ≤ 19
 “Child” if age &lt; 13
 “Adult” if age ≥ 20*/
#include<iostream>
using namespace std;
int main() {
	int age;
	age=0;
	cout<<"enter your age\n ";
	cin>>age;
	if(age>=18) {
		cout<<"Eligible to vote \n ";}
		else {cout<<"Not Eligible to vote \n";
		}
	if(age<13){cout<<"Child";
	} 
	else{if(age>19) {cout<<"Adult";
	}
	else {if(age>=13) {cout<<"teenager";
	}
	}
	
	
}