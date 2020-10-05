//============================================================================
// Name        : arrays.cpp
// Author      : ashraf
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Array of intiger" << endl;
	cout << "---------------- " << endl;

	int values[3];

	values[0] = 9;
	values[1] = 15;
	values[2] = 58;

	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;

	cout << "Array of doubles" << endl;
	cout << "---------------- " << endl;
	double numbers[4]= {1.5, 2.3, 2.5, 8 };

	for(int i=0; i < 4; i++){
		cout << "Element of index " << i << ":" << numbers[i] << endl;
	}

	cout << "initialize value with zero" << endl;
	cout << "---------------- " << endl;

	int numberarrays[8] = { };
	for(int i=0; i < 8; i++){
			cout << "Element of index " << i << ":" << numberarrays[i] << endl;
		}

	cout << "name of fruits " << endl;
		cout << "---------------- " << endl;

		string text[4] = {"banana", "apple", "orange", "grapes" };
		for(int i=0; i < 4; i++){
				cout << "fruits no" << i << ":" << text[i] << endl;
			}



	return 0;
}
