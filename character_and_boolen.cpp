//============================================================================
// Name        : character_and_boolen.cpp
// Author      : ashraf
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	bool bvalue = true;

	cout << bvalue << endl;

	char cvalue = 'g';
	cout << cvalue << endl;
	cout << int(cvalue) << endl;
	cout << "size of cvalue:" << sizeof(char) << endl;

	wchar_t wvalue = 'f';
	cout << char(wvalue) << endl;
	cout << "size of wvalue:" << sizeof(wchar_t) << endl;

	return 0;
}
