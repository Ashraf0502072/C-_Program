//============================================================================
// Name        : Lonked_list.cpp
// Author      : ashraf
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node {
	int data;
	struct Node *next;
};
int main() {
	struct Node *a = NULL;
	struct Node *b = NULL;
	struct Node *c = NULL;
	a = (struct Node* )malloc(sizeof (struct Node));
	b = (struct Node* )malloc(sizeof (struct Node));
	c = (struct Node* )malloc(sizeof (struct Node));
	a->data =10;
	b-> data =20;
	c->data =30;
	a->next = b;
	b->next = c;
	c->next = NULL;
	//Traverse Linked List
	while (a !=NULL){
		cout <<  a->data <<  "->  ";
		a = a-> next;
	}

	//cout << "The linked list is : "

	return 0;
}
