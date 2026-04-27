#include<iostream>
using namespace std;
int main(){
	int count,mul;
	cout<<"enter a number \n";
	cin>>count;
	for(int i=1;i<count;i++){
		if(i%2!=0){
			mul=i*i;
			cout<<mul<<endl;
		}
	}
}