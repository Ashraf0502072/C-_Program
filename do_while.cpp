//============================================================================
// Name        : do_while.cpp
// Author      : ashraf
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	const string password = "ashraf";

	string input;

	do {
		cout << "enter your password> " << flush;
		cin >> input;

		if (input != password) {
			cout << "access denied" << endl;

		}
	} while (input != password);

	cout << "password accepted" << endl;

	return 0;
}
