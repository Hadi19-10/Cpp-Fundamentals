#include <iostream>
using namespace std;
int main() 
{
	float hour = 3600, min = 60, seconds = 34, second_hour, second_min;
	second_hour = seconds / hour;
	second_min = seconds / min;
	cout<<seconds << " in hours = "<< second_hour<<endl;
	cout<<seconds << " in minutes = "<< second_min<<endl;
	return 0;

}