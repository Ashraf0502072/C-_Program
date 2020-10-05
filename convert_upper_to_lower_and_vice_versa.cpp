//============================================================================
// Name        : convert_upper_to_lower_and_vice_versa.cpp
// Author      : ashraf
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char ch;
	cout << "Enter the Alphabet:";
	cin >>ch;

	if((ch >= 'A' && ch <='Z') || (ch >= 'a' && ch <='z'))
	{
		if(ch >= 'A' && ch <= 'Z')
			ch = ch+32;
		else if (ch >= 'a' && ch <= 'z')
			ch = ch-32;
		else
			;
		cout << "The converted value is: " << ch << endl;
	}



	else
	{

	cout << "This is not an alphabet" << endl;
	// prints !!!Hello World!!!
	}
	return 0;
}
