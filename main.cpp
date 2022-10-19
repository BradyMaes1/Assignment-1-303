#include <iostream>
#include <fstream>
#include "assignment1.h"
using namespace std;


int main() {
	
	//Code for reading in input file
	
	string inputFile;
	//Asks the user for the name of the file to read
	cout << "What is the name of the file you'd like to open?:\n";
	cin >> inputFile;
	ifstream infile(inputFile);
	int tempNum;
	int counter = 0;
	int *mainArray = new int[100];

	//While loop that puts integers from the input file (separated by spaces) into a temporary variable and then adds that to the array
	while (infile >> tempNum){
		mainArray[counter] = tempNum;
		counter++;
	}
	cout << endl;

	
	//Test runs the findInt function on the array
	cout << "Integer 33 is at position: " << findInt(33, mainArray) << endl; //33 is chosen because we already know that its position is at 97


	cout << endl;
	//Test runs the modifyInt function and then checks that the array was correctly updated on the next line
	modifyInt(mainArray);
	cout << mainArray[3];
	cout << endl;

	cout << endl;
	//Test runs the addInt function and then checks that the end of the array is the new integer that was added
	addInt(mainArray, 100);
	cout << mainArray[100];
	for(int i = 0; i < 101; i++){
		if (i % 10 == 0)
			cout << endl;
		cout << mainArray[i] << " ";
	}

	

	cout << endl;
	//Test runs the delInt function and then checks that the integer at the given position is now 0
	delInt(8, mainArray, 101);
	
	cout << endl << endl;
	for(int i = 0; i < 100; i++){
		if (i % 10 == 0)
			cout << endl;
		cout << mainArray[i] << " ";
	}
	

}