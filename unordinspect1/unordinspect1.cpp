// unordinspect1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <unordered_set>
#include <iostream>
#include "buckets.h"
int main()
{
	// create and initialize an unordered set
	std::unordered_set<int> intset = { 1,2,3,5,7,11,13,17,19 };
	printHashTableState(intset);
	// insert some additional values (might cause rehashing)
	intset.insert({ -7,17,33,4 });
	printHashTableState(intset);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
