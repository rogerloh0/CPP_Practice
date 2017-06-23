#include<iostream>
#include<string>

using namespace std;

int main(){
	cout << "Welcome to the student scoring system..." << endl;
	cout << "Enter \'Y\' if you want to calculate average score and how many student passed.";
	float sum, avg;
	int total = 0;
	int pass = 0;
	string score;
	cin >> score;
	while(score != "Y"){
		if(static_cast<int>(score) >= 60){
			pass++;
		}
		total++;
		sum += static_cast<int>(score);
		cout << "Enter \'Y\' if you want to calculate average score and how many student passed.";
		cin >> score;
	}
	avg = sum/total;
	cout << "Average: " << avg << endl;
	cout << "Passed: " << pass << endl;
}
