//============================================================================
// Name        : binary_search.cpp
// Author      : ashraf
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int Binary_Search(){

	int x,i, n;
	cout << "Give the number of element :" << endl;
	cin >>n;
	int arr[n];

	 for (int i = 0; i < n; ++i) {
		 cout <<"Position Number " << i << " array is: "<< endl;
	        cin >> arr[i];
	    }

	 cout << "The array is : " << "{";

	 for (int j = 0; j < n; ++j) {
	         cout <<  arr[j] << " ";

	     }
	 cout << "}" << endl;;

		cout << "enter the searching number: " ;
		cin>>x;
    int left,right, mid;

    left =0;
    right = n-1;
    while (left <=right){

    	mid = (left+right)/2;

    	if(arr[mid]==x ){
    		cout << x << " is in the index number : " << mid;
    	}
    	else if(arr[mid]<x){
    		left = mid+1;
    	}else{
    		right =mid-1;
    	}
    }

        		cout << x << " not in the array. " ;

}

int main() {
	Binary_Search();
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
