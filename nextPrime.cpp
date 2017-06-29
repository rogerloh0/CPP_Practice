#include<iostream>
#include "isPrime.cpp"

using namespace std;

int main(){
	char ans;
	cout << "Would you like to know the next prime number?(Y/n)";
	cin >> ans;
	int num = 2;
	while(ans == 'Y' || ans == 'y'){
		while(!isPrime(num)){
			num++;
		}
		cout << num << endl;
		num++;
		cout << "Would you like to know the next prime number?(Y/n)";
		cin >> ans;
	}
	cout << "Exiting Program..." << endl;
}
