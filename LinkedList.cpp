#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList(){
	head = NULL;
	tail = NULL;
} 

void LinkedList::createNode(int value){
	node *temp = new node;
	temp->data = value;
	temp->next = NULL;
	if(head == NULL)
	{
		head = temp;
		tail = temp;
		temp = NULL;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}
}

void LinkedList::displayList(){
	node *temp = new node;
	temp = head;
	while(temp!=NULL){
		cout << temp->data<<"\t";
		temp = temp->next;
	}
}

void LinkedList::insert_start(int value){
	node *temp=new node;
	temp->data=value;
	temp->next=head;
	head = temp;
}

void LinkedList::insert_position(int pos, int value){
	node *pre = new node;
	node *cur= new node;
	node *temp = new node;
	cur = head;
	for(int i=1;i<pos;i++)
	{
		pre=cur;
		cur=cur->next;
	}
	temp->data = value;
	pre->next = temp;
	temp->next = cur;
}

void LinkedList::delete_first(){
	node *temp = new node;
	temp = head;
	head = head->next;
	delete temp;
}

void LinkedList::delete_last(){
	node *cur = new node;
	node *pre = new node;
	cur = head;
	while(cur->next!=NULL){
		pre = cur;
		cur=cur->next;
	}
	tail = pre;
	pre->next = NULL;
	delete cur;
}

void LinkedList::delete_position(int pos){
	node *pre = new node;
	node *cur = new node;
	node *temp = new node;
	cur = head;
	for(int i = 1; i < pos; i++){
		pre = cur;
		cur->next = cur;
	}
	pre->next = cur->next;
	delete cur;
}

int LinkedList::find_min(){
	node *cur = new node;
	cur = head;
	int temp = head->data;
	while(cur->next!=NULL){
		cur = cur->next;
		if(cur->data < temp){
			temp = cur->data;
		}
	}
	return temp;
}

int LinkedList::find_max(){
	node *cur = new node;
	cur = head;
	int temp = head->data;
	while(cur->next!=NULL){
		cur = cur->next;
		if(cur->data > temp){
			temp = cur->data;
		}
	}
	return temp;
}
