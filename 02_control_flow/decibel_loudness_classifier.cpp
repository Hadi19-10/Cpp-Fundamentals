#include <iostream>
using namespace std;
int main() {
	int loudness;
	cout<<"Loudness in Decibels(db) \n";
	cin>>loudness;
	if(loudness>=50){
		if(loudness>=70) {
			if(loudness>=90){
				if(loudness>=110) {
					cout<<"It's uncomfortable ";
				}
				else cout<<"It's very annoying ";
			}
			else cout <<"It's Annoying " ;
		}
		else cout<<"It's Intrusive ";
	}
	else cout<<"It's Quite ";
	
	return 0;
}