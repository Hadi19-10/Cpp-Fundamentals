#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=10;i+=2){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}