// ^nC^r= n!/r!(n-r)!

#include<iostream>
using namespace std;
void binomial(int n,int r){
	int nc=n-r;
	long factn=1;
	long factr=1;
	long factnc=1;
	for(int i=1;i<=n;i++){
		factn*=i;
	}
	for(int k=1;k<=r;k++){
		factr*=k;
	}
	for(int j=1;j<=nc;j++){
		factnc*=j;
	}
	long double binomial=factn/(factr*factnc);
	cout<<"n!/(r!*(n-r)!) = "<<binomial<<endl;
}
int main(){
	int n,r;
	cout<<"enter value of n\n";
	cin>>n;
	cout<<"enter value of r\n";
	cin>>r;
	binomial(n,r);
	return 0;
}