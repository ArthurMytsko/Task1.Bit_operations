/**
 * @file  Main.cpp
 * @brief Implement main function
 */
#include <iostream>
#include <conio.h>
#include "Task1.h"

using namespace std;

 /**
   * @brief      Main function, implement input and output data and calling functions of Tak1
   * @return	 1 - number is power of two, 0 - no
   */
int main(void)
{
	//unsigned long int ulNumber;
	//cout << "x = ";
	//cin  >> ulNumber;

	//for(int i = sizeof(ulNumber) * 4 - 1; i >= 0; i--)
	//	cout << (ulNumber >> i & 0x1 );
	//cout << '\n';
	//cout << PowerOfTwo(ulNumber);

	//int n;
	//int p;
	unsigned long ulResult;
	//cout << "n = ";
	//cin >> n;
	//cout << "p = ";
	//cin >> p;


	//for(int i = sizeof(n) * 4 - 1; i >= 0; i--)
	//	cout << (n >> i & 0x1 );
	//cout << '\n';

	//for(int i = sizeof(p) * 4 - 1; i >= 0; i--)
	//	cout << (p >> i & 0x1 );
	//cout << '\n';

	//ulResult = SetBits(n, p);

	//for(int i = sizeof(ulResult) * 4 - 1; i >= 0; i--)
	//	cout << (ulResult >> i & 0x1 );
	//cout << '\n';
	unsigned long int ulNumber;
	cout << "x = ";
	cin  >> ulNumber;

	for(int i = sizeof(ulNumber) * 4 - 1; i >= 0; i--)
		cout << (ulNumber >> i & 0x1 );
	cout << '\n';
	cout << TwoSetBit(ulNumber);

	_getch();
	return 0;
}