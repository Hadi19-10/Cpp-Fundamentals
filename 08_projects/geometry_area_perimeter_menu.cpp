/*Write a C program that displays the following menu:
1. Find area and perimeter of a square
2. Find area and perimeter of a rectangle
3. Find area and perimeter of a circle
4. Exit the program
The program then reads the menu choice and behaves as in the following table:*/
//area of suqare= side * side
//perimeter of square = side+side+side+side
//Area of rectangle=Length * width
//perimeter of rectangle=2L + 2w
//area of circle =pi*r*r
//perimter of circle=2pi *r
#include<iostream>
using namespace std;
int main () {
	const float pi=3.14;
	float side,length,width,perimeter,area,radius,aosquare,posquare,aorectangle,porectangle,aocircle,pocircle;
	string value;
	int choice;
	cout<<"Which one do you want to proceed with \n";
	cout<<"Press 1 to find area and perimeter of square \n";
	cout<<"Press 2 to find area and perimter of rectangle \n";
	cout<<"Press 3 to find area and perimteter of Circle \n";
	cout<<"Press 4 to exit this program \n";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"Give a side of a square \n";
			cin>>side;
			aosquare=side*side;
			posquare=side+side+side+side;
			cout<<"area of your square is : "<<aosquare<<"cm/m^2"<<endl;
			cout<<"perimeter of your square is : "<<posquare<<"cm/m"<<endl;
		break;
		case 2:
			cout<<"Give length of your rectangle \n";
			cin>>length;
			cout<<"Give width of your rectangle \n";
			cin>>width;
			aorectangle= length*width;
			porectangle=2*length+2*width;
			cout<<"Area of your rectangle is : "<<aorectangle<<"cm/m^2"<<endl;
			cout<<"Perimeter of your rectangle is : "<<porectangle<<"cm/m"<<endl;
		break;
		case 3:
			cout<<"give the radius of your circle \n";
			cin>>radius;
			aocircle=pi*(radius*radius);
			pocircle=(2*pi)*radius;
			cout<<"Area of your circle is : "<<aocircle<<"cm/m^2"<<endl;
			cout<<"Perimeter of your circle is : "<<pocircle<<"cm/m"<<endl;
		break;
		case 4:
			cout<<"No shape selected \n";
		}
	
}