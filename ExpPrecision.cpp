//Set Percision for e

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
	int n;
	cout << "How many digits of natural exponentia would you like to have after decimal point: ";
	cin >> n;
	cout << setprecision(n+1) << exp(1); 
}
