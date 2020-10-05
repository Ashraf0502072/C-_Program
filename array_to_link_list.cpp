//============================================================================
// Name        : array_to_link_list.cpp
// Author      : ashraf
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stdlib.h>
using namespace std;

struct Node *CreatLinkedList(int arr[], int size);

int SearchingLinkedList(struct Node *head, int val);

struct Node{
	int data;
	struct Node *next;
};

int main() {
	int a[] ={5,10,15,20,25};
	struct Node *head;
	head= CreatLinkedList(a,5);
	while (head !=NULL){
		cout << head->data << " -> " ;

		head = head ->next;
	}
	cout << "NULL" << endl;
	cout<< "Index: " << SearchingLinkedList(head,15);
	return 0;
	}


int SearchingLinkedList(struct Node *head, int val){
	int index =1;
	while(head != NULL){
		if (head->data ==val){
			return index;
		}
		index++;
		head = head->next;
	}
	return -1;
}
struct Node  *CreatLinkedList(int arr[], int size){

	struct Node *head = NULL, *temp = NULL, *current = NULL ;
	for (int i=0; i<size; i++){
		temp= (struct Node *)malloc(sizeof(struct Node));
		temp ->data=arr[i];
		temp -> next =NULL;
		if (head == NULL){
			head = temp;
			current = temp;
		}else{
			current ->next = temp;
			current = current->next;
		}

	}

	return head;


}
