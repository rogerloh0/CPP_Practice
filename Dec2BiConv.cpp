//Decimal to Binary Converter

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int num;
	cout << "Please enter a number in decimal form: ";
	cin >> num;
	int n = 1;
	int numBi = 0;
	while(num / pow(2, n)>1){
		numBi += (num % pow(2,n))*pow(10, n);
		n++;
	}
	cout << numBi; 
} 
