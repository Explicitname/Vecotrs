/*
 * Main.cpp
 *
 *  Created on: Nov 17, 2014
 *      Author: explicitname
 */

#include <iostream>
#include <vector>

using namespace std;




int main ()

{

const int size = 20;
vector<string>textVect();


	cout << "Populating Vector....................." << endl;

	for (int i = 0; i < size; i++)
	{


		textVect.push_back ("This is a String in a Vector!");


	}

	cout << "Viewing The Vector Contents............" << endl;

	for (int i = 0; i < size; i++)

	{

		cout << textVect[i] << endl;


	}





	return 0;
}


