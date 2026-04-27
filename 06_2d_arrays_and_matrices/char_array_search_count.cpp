/*Write a program using char array. Input a sequence form user when user presses the
Enter key your program should do the following:
? Input a character from user.
? Search for that character in the input sequence.
? Display the number of occurrence to user.*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"How many Number you want to declare in array\n";
	cin>>
	char arr[n]={0};
	char enter;
	int count=0;
	bool found=false;
	cout<<"enter a character to found in declared array\n";
	cin>>enter;
	for(int i=0;i<n;i++){
		if(arr[i]==enter){
			found=true;
			count++;
		}
	}
	if(found){
		cout<<"your entered character "<<enter<<" appeared "<<count<<"time/s in this array\n";
	}
	else{
		cout<<"Character not found?\n";
	}
	return 0;
}