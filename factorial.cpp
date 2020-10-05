//============================================================================
// Name        : factorial.cpp
// Author      : ashraf
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
	int d,n;

	d=1;
	cout << "get the value:" << endl;
	cin >>n;

	for(int i = 1; i <=n; ++i){

		d=d*i;



	}
	 //printf("the factorial value of %i",n);
	 //printf(" is %i:",d);
	cout << "the factorial value of " << n << " is:" << d <<endl;
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
