#pragma once
#include <iostream>

using namespace std;

int findInt(int , int[]);
//pre: Takes in an integer and array
//post: Returns the position of the first occurence of the given integer or returns -1 if it is not found.

void modifyInt(int[]);
//pre: Takes in an array
//post: Returns the user the old and new integer in the given position as well as updates the original array

void addInt(int *&, int);
//pre: Takes in an integer and array
//post: Adds the given integer to the end of the array


void delInt(int, int *&, int);
//pre: Takes in an integer position and an array
//post: Deletes the integer at the given position from the array

