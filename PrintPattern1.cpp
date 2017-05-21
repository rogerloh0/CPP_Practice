#include<iostream>

using namespace std;

int main(){
	int n = 7;
	for(int i = 1; i <= n; i++){
		int iter = i;
		for(;iter > 0;iter--){
			cout << "A";
		}
		cout << endl;
	}
	return 0;
} 
