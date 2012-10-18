/**
 * @file   IOFunctions.h
 * @brief  Implement I/O functions 
 * @author Arthur Mytsko
 */

#include "IOFunctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


void PrintBinCode(long pNumber)
{
	UL ulMask = -1;
	ulMask = ~(ulMask >> 1);

	for(int i = 0; i < sizeof(long) * 8; i++)
	{
		printf("%d", (pNumber & ulMask) != 0);
		ulMask >>= 1;
	}
	printf("\n");
}


UL ValidInput(char cSymbol)
{
  	char *cBuffer = new char[100];
	UL ulTemp = -1;
	ulTemp >>= 1;
	
	printf("%c = ", cSymbol);

	while(true)
	{
		gets_s(cBuffer, 100);
		UCH chBufLen = strlen(cBuffer);

		int i = 0;
		while( (cBuffer[i] == ' ') && (i <= chBufLen) ) // skip spaces
			i++;
		if(i == chBufLen )
			{
				printf("Wrong number! Try again..\n");
				continue;
			}
		if(cBuffer[i] == '-')
			i++; // skip '-'
		if(i == chBufLen)
			{
				printf("Wrong number! Try again..\n");
				continue;
			}
		//skip digits
		while((cBuffer[i] >= '0') && (cBuffer[i] <= '9') && i <= chBufLen)
			i++;

		bool bBreakOutCicle = false;
		while(i < strlen(cBuffer) && i <= chBufLen)
		{
			if(cBuffer[i] != ' ')
			{
				printf("Wrong number! Try again..\n");
				bBreakOutCicle = true;
				break;
			}
			i++;
		}
		if(bBreakOutCicle)
			continue;
		if( (atol(cBuffer) == ulTemp) || atol(cBuffer) ==  ~ulTemp)
		{
			printf("Wrong number! Try again..\n");
			continue;
		}
		break;
	}
	return atol(cBuffer);
};

void PrintInfo(void)
{
	_getch();
	system("cls");
	printf("Choose task:\n");
	printf("'a' : task 1\n");
	printf("'b' : task 2\n");
	printf("'c' : task 3\n");
	printf("'o' : task 15\n");
	printf("'p' : task 16\n");
	printf("'q' : task 17\n");
	printf("'r' : task 18\n");
	printf("'s' : task 19\n");
	printf("'t' : task 20\n");
	printf("'y' : task 25\n");
	printf("\n 0 - exit\n");
}
