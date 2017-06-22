#include<iostream>

using namespace std;

int main(){
	
	int stuNum = 0;
	float score;
	float avg;
	cout << "Enter number of students in class: " << endl;
	cin >> stuNum;
	
	//Calculate Average
	float sum;
	for(int i = 0; i < stuNum; i++){
		cout << "Please input student score: " << endl;
		cin>>score;
		sum += score;
	}
	avg = sum/stuNum;
	cout << "Average score: " << avg << endl;
}
