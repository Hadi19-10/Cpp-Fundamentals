#include<iostream>
using namespace std;
int main(){
	int n,mul;
	cout<<"enter a number \n";
	cin>>n;
	for(int i=1;i<=10;i++){
		mul=n*i;
		cout<<n<<" x "<<i<< " = "<< mul<<endl;
	}
	return 0;
}