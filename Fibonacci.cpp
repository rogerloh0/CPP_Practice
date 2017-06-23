#include<iostream>

using namespace std;

int main(){
	int num;
	cout << "How many Fibonacci would you like? " << endl;
	cin >> num;
	int fib[num];
	int n1 = 1;
	int n2 = 0;
	int temp;
	if(num<=2 && num > 0){
		for(int i = 0; i < num; i++){
			fib[i]=1;
		}
		for(int i = 0; i < num; i++){
			cout << fib[i];
			if(i+1 != num)
				cout << ", ";
		}
	}
	else if(num>2){
		fib[0]=1;
		fib[1]=1;
		for(int i = 2; i<num;i++){
			fib[i] = fib[i-1] + fib[i-2];
		
		}
		for(int i = 0; i < num; i++){
			cout << fib[i];
			if(i+1 != num)
				cout << ", ";
		}
	}
	else{
		cout << "Please enter a number larger than zero..." << endl;
	}
	return 0;
}
