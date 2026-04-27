#include<iostream>
using namespace std;
int main(){
	int random[10]={2,3,6,8,13,3,18,19,21,22};
	int n;
	bool guess=true;
	int count=0;
	cout<<"Number guessing\nguess a number from set of 10 numbers between 1-30\n";
	cin>>n;
	for(int i=0;i<=9;i++){
	if(n==random[i]){
		guess=false;
		count++;
	}
}
    if(guess){
    	cout<<"you failed to guess the number\n";
	}
	else{
		cout<<"Congrats your number is in the set!! \n";
	    cout<<"number of times your number appeared is "<<count<<endl;
}
return 0;
}