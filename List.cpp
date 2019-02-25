#include "List.h"
#include <iostream>
#include <cstring>

struct Node {
	Planet * planet;
	struct Node *next;
};

List::List(){
	Node *head = NULL;
	Node *tail = NULL;
}

List::~List(){
	Node * temp = head;
	while(temp->next != NULL){
		temp = temp->next;
		delete temp;
	}
}

void insert (int index, Planet * p){
	int count = 0;

	Node inserting = NULL;
	inserting->planet = p;
	Node * previous = NULL;
	Node * current = NULL;

	current = this->head;

	while(current->next){
		previous=current;
		if(count == index){
			previous->next = current;
			return;
		}
		count = count + 1;
	}
}
