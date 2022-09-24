#include <iostream>
#include <vector>
#include "assignment1.h"

using namespace std;

int findInt(int i, vector<int> arr){
	//Loops through the array until it encounters the desired integer and returns the position it was found out
	for(int x = 0; x < arr.size(); x++){
		if(arr[x] == i)
			return x;
	}
	//If the integer was not found, -1 is returned
	return -1;
}

void modifyInt(int pos, vector<int> &arr){
	//Asks the user what they would like to replace the old integer with and stores their input in the newNum variable
	cout << "What would you like to replace the old number with?:\n";
	int newNum;
	int oldNum = arr[pos];
	cin >> newNum;
	//Updates the given position in the array to the new integer and prints a statement to reflect this
	arr[pos] = newNum;
	cout <<"The old value was: " << oldNum << " at position " << pos << " within the array. The new value is: " << newNum << endl;
}

void addInt(int i, vector<int> &arr){
	//Prints a statement of what is to be done, then appends the given integer to the end of the array
	cout << "Placing integer " << i << " at the end of the array\n";
	arr.push_back(i);
}

void zeroInt(int pos, vector<int> &arr){
	//Prints a statement of what is to be done, then replaces the given position with zero
	cout << "Zeroing the integer " << arr[pos] << " at position " << pos << endl;
	arr[pos] = 0;
	
}

