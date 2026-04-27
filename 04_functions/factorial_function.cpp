#include<iostream>
using namespace std;
long double fact(int a){
	int fact=1;
	for(int i=1;i<=a;i++){
		fact*=i;	
	}
	return fact;
}
int main(){
	int n;
	long double factorial;
	cout<<"enter a number for factorial\n";
	cin>>n;
	factorial=fact(n);
	cout<<factorial<<endl;
	return 0;
}