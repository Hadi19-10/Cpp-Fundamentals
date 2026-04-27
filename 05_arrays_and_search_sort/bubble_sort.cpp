#include<iostream>
using namespace std;
void bubblesort(int[],int);
int main(){
	int n=4;
	int arr[n]={99,77,120,400};
	bubblesort(arr,n);
	return 0;
}
void bubblesort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}