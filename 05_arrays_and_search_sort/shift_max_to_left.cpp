/*Write a program the shift the highest number to the left of the array.
e.g. {11,33,44,66,89} to {89,11,33,44,66}*/
#include<iostream>
using namespace std;
int main(){
	int arr[5]={11,33,44,66,89};
	int prearr=arr[0];
	for(int i=0;i<=4;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n\n\n";
	for(int i=0;i<=4;i++){
		if(arr[i]>prearr){
			prearr=arr[i];
		}
	}
	cout<<prearr<<" ";
	for(int i=0;i<4;i++){
		cout<<arr[i]<<" ";
		arr[i]++;
	}
return 0;
}