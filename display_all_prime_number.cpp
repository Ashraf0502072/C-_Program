//============================================================================
// Name        : display_all_prime_number.cpp
// Author      : ashraf
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//function to check prime numbers
int isPrime(int num);

int main()
{
	int i;
	int n; //to store, maximum range

	cout<<"Enter maximum range (n): ";
	cin>>n;

	//print prime numbers from 2 to n
	cout<<"Prime numbers:"<<endl;
	for(i=2;i<n;i++)
	{
		if(isPrime(i))
			cout<<i<<" ";
	}
	//cout<<endl;

	return 0;
}

//function definition
int isPrime(int num)
{
	int i;
	int prime=1;

	for(i=2;i<(num/2);i++)
	{
		if(num%i==0)
		{
			prime=0;
			break;
		}
	}
	return prime;
}
