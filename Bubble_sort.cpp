//============================================================================
// Name        : Bubble_sort.cpp
// Author      : ashraf
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


//Bubble sort

/*
#include <iostream>
using namespace std;

int main() {

	int arr[]= {10,15,2,4,8,28,14,6,1};
	int i, j , size = 9;
	for(i=0; i<size-1; i++){
		for(j=0; i< size-1-i;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1]= temp;
			}
		}
	}
	cout << "After Sorting "<<endl;
	for(i=0; i< size-1;i++){
		cout << arr[i];
	}
	cout<<endl;

	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}

*/

//Selection Sort

/*
#include <iostream>
using namespace std;

int main() {

	int arr[]= {10,15,-24,8,28,14,6,1};
	int i, j , size = 8, min_index;

	//outer loop
	for(i=0; i< size; i++){
		min_index=i;

	//inner loop to find the minimum index
		for (j=i+1;j< size;j++){
			if(arr[j]<arr[min_index]){
				min_index =j;
			}
		}
	//swap to number
		int temp = arr[i];
		arr[i]= arr[min_index];
		arr[min_index]= temp;
	}

	//Print sorted data
    cout << "arr[] = {";
	for(i=0; i< size; i++){
		cout << arr[i]<< "   ";
	}
cout<< "}"<<endl;
	return 0;
}
*/


//insertion sort

/*
#include <iostream>
using namespace std;

int main() {

	int arr[]= {10,15,-24,8,28,14,6,1};
	int i, size = 8, value, hole;
	for(i=1;i<size;i++){
		 value =arr[i];
		 hole = i;
		 while(hole > 0 && arr[hole-1] > value){
			 arr[hole] =arr[hole-1];
			 hole--;
		 }
		 arr[hole]=value;
	}
	//Print sorted data
	    cout << "arr[] = {";
		for(i=0; i< size; i++){
			cout << arr[i]<< "   ";
		}
	cout<< "}"<<endl;

	return 0;
}
*/



