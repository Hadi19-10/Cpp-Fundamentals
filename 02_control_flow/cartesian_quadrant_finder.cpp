#include <iostream>
using namespace std;
int main() {
	float x,y;
	cout<< "finding cartesian plane of your given co-ordinates \n";
	cout<<"Please give x co-ordinates \n";
	cin>>x;
	cout<<"Pleas give your y co-ordinates \n";
	cin>>y;
	if (x>0 && y>0) {
		cout<<"you are in 1st quadrant \n";
	}
	else if(x<0 && y>0){
		cout<<"you are in 2nd quadrant \n";
	}
	else if(x<0 && y<0) {
		cout<<"you are in 3rd quadrant \n";
	}
	else if (x>0 && y<0) {
		cout<<"you are in 4th quadrant ";
	}
	else if (x==0 && y>0){
		cout<< "you are in y axis";
	}
	else if (x>0 && y==0) {
		cout<<"you are in x axis";
	}
	
	return 0;
}