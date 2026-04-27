#include <iostream>
using namespace std;

int main() {
    int a = 123;
    cout<<"actual number: "<<a<< endl;
    int h1, h2, h3, reversed;
    h1 = a % 10;
    a = a / 10; 
    h2 = a % 10;
    a = a / 10;
	h3 = a;
    reversed = h1 * 100 + h2 * 10 + h3; 
    cout << "Reversed number: " << reversed;
    return 0;
}
