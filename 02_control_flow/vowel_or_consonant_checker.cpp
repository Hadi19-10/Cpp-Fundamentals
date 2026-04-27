#include<iostream>
using namespace std;
int main() {
	char alphabet;
	cout<<"enter an alphabet and we will find out if it is a vowel or a consonant \n";
	cout<<"enter the alphabet \n";
	cin>>alphabet;
	switch(alphabet){
		case 'a':
			cout<<"you entered a vowel \n";
		break;
		case 'e':
			cout<<"you entered a vowel \n";
		break;
		case 'i':
			cout<<"you entered a vowel \n";
		break;
		case 'o':
			cout<<"you entered a vowel \n";
		break;
		case 'u':
			cout<<"you entered a vowel \n";
		break;
		case 'A':
			cout<<"you entered a vowel \n";
		break;
		case 'E':
			cout<<"you entered a vowel \n";
		break;
		case 'I':
			cout<<"you entered a vowel \n";
		break;
		case 'O':
			cout<<"you entered a vowel \n";
		break;
		case 'U':
			cout<<"you entered a vowel \n";
		break;
		default:
			cout<<"you entered a consonant";
	}
	return 0;
}