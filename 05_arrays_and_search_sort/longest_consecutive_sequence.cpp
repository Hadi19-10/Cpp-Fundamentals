/*Find Longest Consecutive Increasing Sequence
Example:
Input: 3, 4, 5, 10, 11, 12, 13, 2
Longest increasing sequence = 10, 11, 12, 13 (length = 4)*/

#include<iostream>
using namespace std;
int main()
{
	int arr[]={3,4,5,10,11,12,13,2};
	int currentlength=1;
	int maxlength=1;
	int start=0;
	int maxstart=0;
	for(int i=0;i<=7;i++){
		if(arr[i]==arr[i-1]+1){
			currentlength++;
		}
		else{
			currentlength=1;
			start=i;
		}
		if(currentlength>maxlength){
			maxstart=start;
			maxlength=currentlength;
		}
	}
	cout<<"largest increasing sequence is : ";
	for(int i=maxstart; i<maxstart+maxlength; i++){
		cout<<arr[i]<<" ";
	}
	cout<<" \" Maximum Lenghth is :" <<maxlength<<" \" "<<endl;
	
	return 0;		
}