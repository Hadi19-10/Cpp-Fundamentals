#include<iostream>
using namespace std;
int main(){
	int n,count=0;
	cout<<"enter a number \n";
	cin>>n;
	for(int i=2;i<n;i++){
		if(n%i==0){
			count++;
		}
		}
		if(count==2){
			cout<<"It's a prime number \n";}
		else {
			cout<<"it's a non prime number \n";
		}
	}
	