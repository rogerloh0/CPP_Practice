#include"LinkedList.h"
#include"LinkedList.cpp" 
#include<iostream>

using namespace std;

int main(){
	LinkedList list;
	list.createNode(7);
	list.createNode(3);
	list.createNode(9);
	list.createNode(5);
	list.createNode(1);
	
	cout << list.find_min() << endl; 
	cout << list.find_max() << endl;
	cout << "Please enter any key to continue...";
	getchar();
	
	return 0;
}
