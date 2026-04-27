#include<iostream>
using namespace std;
int main(){
	int first[10];
	int second[10];
	int multiply[10];
	for(int i=0;i<=9;i++){
		cout<<"enter first number "<<i+1<<endl;
		cin>>first[i];
	}
	for(int j=0;j<=9;j++){
		cout<<"enter second number "<<j+1<<endl;
		cin>>second[j];
	}
	for(int u=0;u<=9;u++){
		multiply[u]=first[u]*second[u];
		cout<<"Multiplication of :"<<u+1<<" array is "<<multiply[u]<<endl;
	}
	return 0;
}