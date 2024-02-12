// FunctionsWorkSheet2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include "FunctionsWorkSheet2.h"
using namespace std;
// Todo: KR uncomment!

bool HasValue(int array[], int size, int searchValue)
{
	bool isPresent = false;
	for (int index = 0; index < size; index++)
	{
		if (array[index] == searchValue)
		{
			isPresent = true;
			break;
		}
	}
	return isPresent;
}

int findValueInArray()
{
	int size = 10;
	int array[9];

	fillArrayFromStream(size, array);
	
	int searchValue;

	cout << "Enter the number your looking for: " << endl;
	cin >> searchValue;


	if (HasValue(array, size, searchValue))
	{
		cout << "Found" << endl;
	}
	else
	{
		cout << "Not Found" << endl;
	}
}

void fillArrayFromStream(int size, int  array[9])
{
	for (int i = 0; i < size; i++)
	{
		cout << "Please enter value " << i + 1 << endl;
		cin >> array[i];
	}
}


double NetPay(double grossPay, double taxFree, double taxRate)
{
	double tax = (grossPay - taxFree)/100 * taxRate;
	double netPay = grossPay - tax;

	return netPay;
}

int mainv()
{
	double netPay,grossPay, taxFree, taxRate;

	cout << "Please enter your grossPay: ";
	cin >> grossPay;

	cout << "\nPlease enter your tax free allowence: ";
	cin >> taxFree;

	cout << "\nPlease enter your tax rate: ";
	cin >> taxRate;

	netPay = NetPay(grossPay, taxFree, taxRate);

	cout << "\n" << netPay;
}

int main()
{
	mainv();
	//findValueInArray();
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
