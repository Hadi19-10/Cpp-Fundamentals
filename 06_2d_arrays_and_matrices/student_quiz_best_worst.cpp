#include<iostream>
using namespace std;
int main(){
	const int quizzes=10;
	const int students=5;
	int quiz[students][quizzes]={0};
	int sum[students]={0};
	int best=sum[0],bestindex=0;
	int worst=sum[0],worstindex=0;
	int average=sum[0];
	for(int i=0;i<students;i++){
		cout<<"--Student No : "<<i+1<<" --\n\n";
		for(int j=0;j<quizzes;j++){
			cout<<"eneter marks of quiz no: "<<j+1<<endl;
			cin>>quiz[i][j];
		}
		cout<<"\n\n";
	}
	for(int i=0;i<students;i++){
		for(int j=0;j<quizzes;j++){
			sum[i]+=quiz[i][j];
		}
	}
	for(int i=0;i<students;i++){
		if(sum[i]>best){
			best=sum[i];
			bestindex=i;
		}
		if(sum[i]<worst){
			worst=sum[i];
			worstindex=i;
		}
	}
	cout<<"best student total marks is : "<<sum[bestindex]<<endl;
	cout<<"worst student total marks is : "<<sum[worstindex]<<endl;
	return 0;
}