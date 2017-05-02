#include<iostream>
using namespace std;

int main()
{
	
	int a = 0;
	int b = 0;
	cout << "This is the division calculator" << endl;
	cout << "Please enter the first number: ";
	cin >> a;
	cout << "Please enter the second number: ";
	cin >> b;
	try{
		
		if(b == 0){
			throw 99;
		}
	cout << a / b << endl;
	}
	 
	
	catch(int x){
		cout << "Division by zero! - Error " << x;
	}
}
