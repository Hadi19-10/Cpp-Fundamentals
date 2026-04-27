#include<iostream> 
using namespace std;
int main() {
	int age;
	char gender,marital;
	cout<<"are you a male (y/n) \n";
	cin>>gender;
	cout<<"are you single (y/n) \n";
	cin>>marital;
	cout<<"What is your age \n";
	cin>>age;
	if (gender=='y'){
		if (marital=='y') {
			if(age>=18 && age<=26){
			cout<<"you are included ";}
			else cout<<"you are not included ";
		}
		else cout<<"you are not included ";
	}
	else cout<<"you are not included ";
	
	return 0;
}