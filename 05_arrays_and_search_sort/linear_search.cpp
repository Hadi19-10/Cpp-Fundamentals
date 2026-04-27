#include<iostream>
using namespace std;
int linear_search(int arr[],int sz,int target){
	for(int i=0;i<sz;i++){
		if(arr[i]==target){
			return i;
		}
	}
	return -1;
}
int main(){
	int size=5;
	int arr[]={4,5,3,8,9};
	int target=3;
	cout<<linear_search(arr,size,target);
	return 0;
}