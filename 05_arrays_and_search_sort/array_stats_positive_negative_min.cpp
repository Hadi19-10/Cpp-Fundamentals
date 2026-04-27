/*Write a program that reads 10 real numbers from the user (negative and positive numbers) into
an array, then it will do the following:
- find the sum and average of positive numbers of the array and display them.
- count negative numbers of the array and display it.
- find the minimum value of the array and display it.
Use a separate loop for each one of the tasks shown above.*/
#include<iostream>
using namespace std;
int main(){
	int numbers[10];
	cout<<"enter 10 arrays \n";
	for(int j=0;j<=9;j++){
		cin>>numbers[j];
	}
	float sum=0.00;
	float count=0.00;
	int countneg=0;
	int minvalue=numbers[0];
	for(int i=0;i<=9;i++){
		if(numbers[i]>0){
			sum+=numbers[i];
			count++;
		}
		else if(numbers[i]<0){
			countneg++;
		}
		if(numbers[i]<minvalue){
			minvalue=numbers[i];
		}
		
	}
	int average=sum/count;
	cout<<"sum of all the positive integers is: "<<sum<<endl;
	cout<<"Average of all the positive integers is: "<<average<<endl;
	cout<<"count of negative integrs is: "<<countneg<<endl;
	cout<<"Minimum value in the array is: "<<minvalue<<endl;
return 0;
}
