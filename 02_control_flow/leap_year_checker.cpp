/*Problem:
Input a year and check:
 If divisible by 400 → “Leap Year”
 If divisible by 100 → “Not Leap Year”
 If divisible by 4 → “Leap Year”
 Else → “Not Leap Year”*/ 
#include<iostream>
using namespace std;
int main() {
	int year;
	year=0;
	cout<<"enter an year to find out if it is a leap year or not \n";
	cin>>year;
	//int f1=year%400;
	//int f2=year%100;
	//int f3=year%4;
	if (year%400==0){cout<<"your number is divisible by 400 so it is a leap year \n";
	}
	if(year%100==0){cout<<"your number is divisble 100 so it is not a leap year \n";
	}
	if(year%4==0) {cout<<"your number is divisible by 4 so it is a leap year \n";
	} else {cout<<"not a leap year ";
	}
	}
	
