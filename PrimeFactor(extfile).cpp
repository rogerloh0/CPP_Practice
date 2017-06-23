#include<iostream>
#include "isPrime.h"
#include "isPrime.cpp"

using namespace std;

int main(){
	int num;
	cout << "Welcome to the Prime Factorization Generator" << endl;
	cout << "Please enter the number: ";
	cin >> num;
	int s = 0;
	int limit = 100;
	int fact[limit] = {};
	if(num % 2 == 0){
		fact[s] = 2;
		cout << 2 << " ";
		s++;
	}
	for(int i = 3; i<num; i+=2){
		if(num % i == 0){
			if(isPrime(i)){
				fact[s] = i;
				cout << i << " ";
				s++;
			}
		}
	}
	cout << endl;
	for(int i = 0; i < limit; i++){
		if(fact[i] != 0)
			cout << fact[i] << " ";
	}
	
}
