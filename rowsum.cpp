// rowsum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int A[2][2];
	int rsum = 0;
	int sum = 0;
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> A[i][j];
		}
	}
	cout << "the elements are : " << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0;j < 2;j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << "the sum of each row " << endl;
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0;j < 2;j++)
		{
			
			rsum = rsum+ A[i][j];
		}
	}
	cout << "sum of first row is " << rsum << endl;
	for (int i = 1; i < 2; i++)
	{
		
		
		for (int j = 0;j < 2;j++)
		{
			
			sum = sum + A[i][j];
		}
	}
	cout << "sum of second row is " << sum << endl;
	
}
