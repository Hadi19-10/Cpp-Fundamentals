#include<iostream>
using namespace std;
void reverse_arr(int arr[],int size){
	int start=0;
	int end=size-1;
	while(start<end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
	
	for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
}
int main(){
	int size=9;
	int arr[size]={1,2,3,4,5,6,7,8,9};
	reverse_arr(arr,size);
}