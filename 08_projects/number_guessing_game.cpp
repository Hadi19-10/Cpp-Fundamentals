#include<iostream>
using namespace std;
int main() {
	int random=15, numguess;
	char guessagain='y';
	while (guessagain=='y' || guessagain=='Y'){
		cout <<"Guess the number from 1-30 \n";
		cin >> numguess;
		if(numguess==random){
			cout<<"congratulation you guessed it right";
		}
		else if(numguess>random && numguess<=30){
			cout<<"Too High! \n";
		}
		else if(numguess<random && numguess>=1) {
			cout<<"Too Low! \n";
		}
		else cout<<"you haven't choose the number between 1-30 \n";
		cout<< "do you want guess again (y/n) \n";
		cin>> guessagain;
	}
	cout<<"Bye! see you next time :)";
}