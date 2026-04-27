#include<iostream>
using namespace std;
float average(){
	int quizzes[10];
	int sum;
	int q=1;
	for(int i=0;i<=9;i++){
		cout<<"enter number of quiz No"<<q<<endl;
		cin>>quizzes[i];
		q++;
	}
	for(int j=0;j<=9;j++){
		sum+=quizzes[j];
	}
	float average=sum/10.00;
	cout<<"the average is \n";
	return average;
}
int main(){
	bool choice;
	cout<<"should we start evaluating quizzes \n";
	cin>>choice;
	if(choice){
		cout<<average()<<endl;
	}
	return 0;
}