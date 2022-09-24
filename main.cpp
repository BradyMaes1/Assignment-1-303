#include <iostream>
#include <fstream>
#include <vector>
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
	vector<int> mainArray;

	//While loop that puts integers from the input file (separated by spaces) into a temporary variable and then adds that to the array
	while (infile >> tempNum){
		mainArray.push_back(tempNum);
	}
	cout << endl;

	//Test runs the findInt function on the array
	cout << "Integer 33 is at position: " << findInt(33, mainArray) << endl; //33 is chosen because we already know that its position is at 97

	cout << endl;
	//Test runs the modifyInt function and then checks that the array was correctly updated on the next line
	modifyInt(4, mainArray);
	cout << mainArray[4];
	cout << endl;

	cout << endl;
	//Test runs the addInt function and then checks that the end of the array is the new integer that was added
	addInt(11, mainArray);
	cout << mainArray.back(); // .back() calls the last value
	cout << endl;

	cout << endl;
	//Test runs the zeroInt functio and then checks that the integer at the given position is now 0
	zeroInt(8, mainArray);
	cout << mainArray[8];
	
	
}