#include<iostream>
using namespace std;
int main(){
	bool yes=true;
	while(yes){
		long fact=1;
		int n;
		char option;
		cout<<"enter a number to find fact \n";
		cin>>n;
		for(int i=1;i<=n;i++){
			fact*=i;
		}
		cout<<"fact is: "<<fact<<endl<<endl;
		cout<<"wanna find more? \n";
		cin>>option;
		if(option=='n'||option=='no'){
			yes=false;
		}
	}
	return 0;
}