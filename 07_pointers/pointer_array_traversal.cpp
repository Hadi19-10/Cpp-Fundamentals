#include<iostream>
using namespace std;
int main(){
	int n=5;
	int arr[n]={1,2,3,4,5};
	int *ptr;
	ptr=arr;
	for(int count=0;count<n;count++){
		cout<<*ptr<<" ";
		ptr++;
	}
	cout<<endl;
	for(int count=0;count<n;count++){
		ptr--;
		cout<<*ptr<<" ";
	}
	return 0;
}