#include<iostream>
using namespace std;
int main(){
	int limit=13,first=0,second=1,next=1;
	for(int i=1;i<=limit;i++){
		cout<<first<<",";
		first=second;
		second=next;
		next=first+second;
	}
	return 0;
}