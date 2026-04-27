#include<iostream>
using namespace std;
int main() {
	int n,mul;
	cout<<"enter a number \n";
	cin>>n;
	for(int i=1;i<n;i++){
		mul+=i*i;
	}
	cout<<"total value = "<<mul<<endl;
	return 0;
}