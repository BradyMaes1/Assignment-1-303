#include <iostream>
#include "assignment1.h"

using namespace std;

int findInt(int i, int arr[]){
	//Loops through the array until it encounters the desired integer and returns the position it was found out
	for(int x = 0; x < 100; x++){
		if(arr[x] == i)
			return x;
	}
	//If the integer was not found, -1 is returned
	return -1;
}


void modifyInt(int arr[]){
	int pos = 0;
	int newNum = 0;
	
	try{
	//Asks the user what index they would like to replace and with what, storing the index in pos and new number in newNum
			cout << "What index would you like to change?:\n";
			cin >> pos;
			cout << "What would you like to replace the old number with?:\n";
			cin >> newNum;

			if(cin.fail())
				throw ios_base::failure("");
		}
		catch (std::ios_base::failure& x)
		{
			cerr << "A runtime error was encountered: " << x.what();
			abort();
		}
		catch (const std::exception& ex)
		{
			cerr << "Fatal Error Occured: " << ex.what();
			abort();
		}
		catch(...)
		{	
			cerr<< "Undefined Exception Occured\n";
			abort();
		}
	
	
	int oldNum = arr[pos];
	//Updates the given position in the array to the new integer and prints a statement to reflect this
	arr[pos] = newNum;
	cout <<"The old value was: " << oldNum << " at position " << pos << " within the array. The new value is: " << newNum << endl;
		
	
}


void addInt(int *&mainArray, int size){
	//Prints a statement of what is to be done, then appends the given integer to the end of the array
	int i = 0;
	
	try{
			cout << "What integer would you like to add to the end of the array?:\n";
			cin >> i;	
			
		if(cin.fail())
				throw ios_base::failure("");
		}
		catch (std::ios_base::failure& x)
		{
			cerr << "A runtime error was encountered: " << x.what();
			abort();
		}
		catch (const std::exception& ex)
		{
			cerr << "Fatal Error Occured: " << ex.what();
			abort();
		}
		catch(...)
		{	
			cerr<< "Undefined Exception Occured\n";
			abort();
		}
		

	cout << "Placing integer " << i << " at the end of the array\n";
	
	//Makes a copy of the mainArray with the new integer added to it
	int arrCopy[size+1];
	for(int x = 0; x < size; x++){
		arrCopy[x] = mainArray[x];
	}
	arrCopy[size] = i;

	//Clears the mainArray, then resizes it
	delete[] mainArray;
	mainArray = new int[size+1];

	//Fills the mainArray with the values from the modified arrCopy array
	for(int x = 0; x < size + 1; x++){
		mainArray[x] = arrCopy[x];
	}
	
	
}

void delInt(int pos, int *&mainArray, int size){
	//Prints a statement of what is to be done, then removes the integer at the given position
	cout << "Deleting the integer " << mainArray[pos] << " at position " << pos << endl;

	//Makes a copy of the mainArray without the excluded position present
	int arrCopy[size -1];
	for(int x = 0; x < pos; x++){
		arrCopy[x] = mainArray[x];
	}
	cout << endl;
	for(int x = pos + 1; x < size; x++){
		arrCopy[x - 1] = mainArray[x];
	}

	//Clears the mainArray, then resizes it
	delete[] mainArray;
	mainArray = new int[size -1];

	//Fills the mainArray with the values from the modified arrCopy array
	for(int x = 0; x < size - 1; x++){
		mainArray[x] = arrCopy[x];
		}
	
}
