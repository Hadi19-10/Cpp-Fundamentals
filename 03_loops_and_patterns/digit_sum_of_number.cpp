#include<iostream>
using namespace std;
int changeN(int a){
	int sum;
	while(a>0){
		int lastdigit=a%10;
		a/=10;
		sum+=lastdigit;
	}
	return sum;
}
int main(){
	int n;
	cout<<"enter a number\n";
	cin>>n;
	cout<<changeN(n); 
	return 0;
}