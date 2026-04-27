#include<iostream>
using namespace std;
void selectionsort(int[],int);
int main(){
	int n=5;
	int arr[n]={9,2,3,4,5};
	selectionsort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}
void selectionsort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int sindex=i;
		for(int j=i+1;j<n;j++){
			if(arr[sindex]<arr[j]){
			    sindex=j;
			}
		}
		int temp=arr[sindex];
			arr[sindex]=arr[i];
			arr[i]=temp;
	}
}