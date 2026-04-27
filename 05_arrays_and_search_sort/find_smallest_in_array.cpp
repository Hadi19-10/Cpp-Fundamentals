#include<iostream>
using namespace std;
int main(){
	int arr[9]={5,9,2,-8,4,7,5,-6,-8};
	int smallest=arr[0];
	int smallindex=arr[0];
	for(int i=0;i<9;i++){
		if(arr[i]<smallest){
			smallest=arr[i];
			smallindex=i+1;
		}
	}
	cout<<smallest<<endl<<smallindex<<endl;
	cout<<"length of array : "<<sizeof(arr)/sizeof(arr[0]);
return 0;
}
