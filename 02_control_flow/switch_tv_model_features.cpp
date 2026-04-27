#include <iostream>
using namespace std;
int main() {
	int modelnum;
	cout<<"enter your model number among \n100 \n200 \n300\n";
	cout<<"\t";cin>>modelnum;
	cout<<"your model has following feature \n";
	switch (modelnum) {
		case 300: cout<<"\tPicture-in-Picture \n";
		case 200: cout<<"\tstereo sound \n";
		case 100: cout<<"\tremote control \n ";
		break;
		default: cout<<"you can only choose 100, 200 or 300";
	}
	return 0;
}