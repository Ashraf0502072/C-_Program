//============================================================================
// Name        : break_continue.cpp
// Author      : ashraf
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	/*for(int i=0; i<5; i++){

		cout << "i is : " << i << endl;

	if (i == 3){
		break;
	}
	cout << "looping" << endl;

	}*/

	/*for(int i=0; i<5; i++){

		cout << "i is : " << i << endl;

	if (i == 3){
		continue;
	}
	cout << "looping" << endl;

	}
	*/
	const string password = "ashraf";

		string input;

		do {
			cout << "enter your password> " << flush;
			cin >> input;

			if (input == password) {
				break;
			}
			else{
				cout << "access denied" << endl;

			}
		} while (true);

		cout << "password accepted" << endl;
	cout << "program quitting" << endl;

	return 0;
}
