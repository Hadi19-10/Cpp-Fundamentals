/*Problem:
Input temperature in Celsius and print:
 “Freezing” if temperature ≤ 0
 “Cold” if temperature between 1 and 15
 “Moderate” if temperature between 16 and 30
 “Hot” if temperature &gt; 30*/
#include<iostream>
using namespace std;
int main () {
	int temp;
	temp=0;
	cout<<"Enter Temperature in Celsius \n";
	cin>>temp;
	if(temp<=0) {
		cout<<"Freezing ";
	}
	else {if (temp<=15){cout<<"Cold";
	}else {if(temp<=30){cout<<"Moderate";
	} else{if(temp>30){cout<<"Hot";
	}
	}
	}
	}
	
}