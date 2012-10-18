/**
 * @file   Main.cpp
 * @brief  Implement main function
 * @author Arthur Mytsko
 */
#include <conio.h>
#include "IOFunctions.h"
#include "CallFunctions.h"

 /**
   * @brief      Main function, implement runing all finished tasks
   * @return	 0
   */
int main(void)
{
	bool bFlagContinue  = true;

	PrintInfo();
	while(bFlagContinue)
	{
		switch(_getch() )
		{
		case 'a': // task 1
			RunTask1();
			break;
		case 'b': // task 2
			RunTask2();
			break;
		case 'c': // task 3
			RunTask3();
			break;
		case 'o': // task 15
			RunTask15();
			break;
		case 'p': // task 16
			RunTask16();
			break;
		case 'q': // task 17
			RunTask17();
			break;
		case 'r': // task 18
			RunTask18();
			break;
		case 's': // task19
			RunTask19();
			break;
		case 't': // task20
			RunTask20();
			break;
		case 'y': // task 25
			RunTask25();
			break;
		case '0': // EXIT
			bFlagContinue = false;
			break;
		default:

			break;
		}
	}
	return 0;
}