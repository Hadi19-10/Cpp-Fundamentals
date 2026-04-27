#include<iostream>
using namespace std;
int main(){
	int c=0;
	int n;
	cout<<"enter value till you want to print \n";
	cin>>n;
	for(int i=n;i>=1;i--){
		for(int y=1;y<=c;y++){
				cout<<" ";
		}
		c++;
		/*if(i<=9){
		c++;
		}
		else{
			c+=2;
		}*/
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}

}