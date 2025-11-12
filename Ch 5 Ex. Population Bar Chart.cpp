// Ch 5 Ex. Population Bar Chart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int a, pop, population;
	double year = 1900;
	string file, town;

	cout << "Enter the name of the town: \n";
	cin >> town;
	cout << "Enter the name of the file: \n";
	cin >> file;

	ifstream inputfile(file);
	if (!inputfile)
	{
		cout << "There was an error opening the file " << file << "\n";
		return 1;
	}

	cout << town << " Population Growth\n";
	cout << "each * = 1000 people\n";

	while (inputfile >> pop)
	{
		population = (pop / 1000);
		cout << year << "\t"; 
		for (a = 0; a < population; a++)
		{
			cout << "*";
		}
		cout << "\n";
		year += 20;
	}

	return 0;
}


