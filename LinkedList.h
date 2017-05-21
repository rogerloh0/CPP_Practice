#ifndef LinkedList_h
#define LinkedList_h

#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
}; 

class LinkedList{
	private:
		node *head, *tail;
		
	public:
		LinkedList();
		void createNode(int value);
		void displayList();
		void insert_start(int value);
		void insert_position(int pos, int value);
		void delete_first();
		void delete_last();
		void delete_position(int pos);
		int find_min();
		int find_max();
		
};

#endif
