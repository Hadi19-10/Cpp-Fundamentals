#include<iostream>
using namespace std;
void intersetionfind(int[],int[],int);
int main(){
	int n=5;
	int arr[n]={3,4,2,6,2};
	int arr2[n]={5,4,3,7,0};
	cout<<n;
	return 0;
}
void intersetionfind(int arr[],int arr2[], int n){
	for(int i=0;i<n;i++){
		bool alreadyprinted=false;
		for(int j=0;j<n;j++){
			if(arr[i]==arr2[j]){
				cout<<"[ "<<arr[i]<<"]\t";
				break;
			}
		}
	}
}