#include <iostream>
using namespace std;
int sum(int [],int);
int product(int[],int);
void swapmaxmin(int[],int);
int main(){
    int n=6;
    int arr[n]={3,4,6,7,2,9};
    for (int i=0;i<n;i++){
    	cout<<arr[i]<<" ";
	}
	cout<<endl;
	swapmaxmin(arr,n);
	for (int i=0;i<n;i++){
    	cout<<arr[i]<<" ";
	}
return 0;
}
void swapmaxmin(int arr[],int n){
	int maxindex=n-1;
	int minindex=0;
	for(int i=0;i<n;i++){
		if(arr[i]>arr[maxindex]){
			maxindex=i;
		}
		if(arr[i]<arr[minindex]){
			minindex=i;
		}
	}
	int temp=arr[minindex];
	arr[minindex]=arr[maxindex];
	arr[maxindex]=temp;
}
int sum(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	return sum;
}
int product(int arr[],int n){
	int product=1;
	for(int i=0;i<n;i++){
		product*=arr[i];
	}
	return product;
}