#include "isPrime.h"

bool isPrime(int num){
	int flag = 0;
	if(num != 2 && num % 2 == 0)
		flag = 1;
	for(int i = 3; i < num; i += 2){
		if(num % i == 0)
		flag = 1;
	}
	if(flag == 0)
		return true;
	else
		return false;
};
