#define _USE_MATH_DEFINES
#include<cmath>
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int n;
	cout << "How many digits would you like your PI to be afte the decimal point: ";
	cin >> n;
	cout << setprecision(n + 1) << M_PI;
	return 0;
} 
