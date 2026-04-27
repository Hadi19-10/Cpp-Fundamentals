#include<iostream>
using namespace std;
int main(){
	const int rows=6;
	const int columns=6;
	int arr[rows][columns]={0};
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			cout<<"["<<i<<"]"<<"["<<j<<"] = "<<arr[i][j]<<" \t";
		}
		cout<<endl;
	}
	return 0;
}