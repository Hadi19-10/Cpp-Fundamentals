#include <iostream>
#include <string>
using namespace std;
int main () {
	string name;
	cout<< "enter your name: "<<endl;
	cin>>ws;
	getline(cin, name);
	cout<<"Hi"<<name;
	return 0;
}