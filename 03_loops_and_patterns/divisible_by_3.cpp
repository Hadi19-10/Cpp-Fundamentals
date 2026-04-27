#include<iostream>
using namespace std;
int main(){
	int n=30;
	for(int i=1;i<n;i++){
		if(i%3==0){
			cout<<i<<" is divisible by 3"<<endl;
		}
	}
	return 0;
}