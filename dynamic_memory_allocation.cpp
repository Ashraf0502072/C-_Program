//============================================================================
// Name        : dynamic_memory_allocation.cpp
// Author      : ashraf
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

	int *ptr1, *ptr2;
	ptr1 = (int *) malloc(5*sizeof(int));
	ptr2 = (int *)calloc(5, sizeof(int));

	if (ptr1 == NULL || ptr2 == NULL){
		cout << "Memory allocation failed" << endl;
	}
	else {
		cout<<"Memory allocation Successful"<< endl;
		//do your work
		ptr2= (int *)realloc(ptr2,50);
		cout << "Memory reallocation Successfully";

	}
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}

