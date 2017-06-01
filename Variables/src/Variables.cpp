//============================================================================
// Name        : Variables.cpp
// Author      : Michael Gray
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int number_of_coders = 1;

	int number_of_artists = 3;

	int number_of_staff_members = number_of_artists + number_of_coders;

	cout << "Numbers of coders: " << number_of_coders << endl;

	cout << "Number of artists: " << number_of_artists << endl;

	cout << "Total number of team members: " << number_of_staff_members << endl;

	cout << "New coder hired!" << endl;

	number_of_coders = number_of_coders + 1;

	cout << "New number of coders: " << number_of_coders << endl;

	return 0;













}
