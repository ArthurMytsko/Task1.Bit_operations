/**
 *@file  Main.cpp
 *@brief Implement main function
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
	unsigned long int x;
	cout << "x = ";
	cin  >> x;

	for(int i = sizeof(x) * 4 - 1; i >= 0; i--)
		cout << (x >> i & 0x1 );
	cout << '\n';
	cout << PowerOfTwo(x);

	_getch();
	return 0;
}