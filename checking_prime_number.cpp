//============================================================================
// Name        : checking_prime_number.cpp
// Author      : ashraf
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, i;
	  bool isPrime = true;
	  cout << "Enter a positive integer: ";
	  cin >> n;
	  for(i = 2; i <= n / 2; ++i)
	  {
	      if(n % i == 0)
	      {
	          isPrime = false;
	          break;
	      }
	  }
	  if (isPrime)
	      cout << "This is a prime number";
	  else
	      cout << "This is not a prime number";

	return 0;
}
