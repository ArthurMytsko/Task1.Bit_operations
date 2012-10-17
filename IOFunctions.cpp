/**
 * @file   IOFunctions.h
 * @brief  Implement I/O functions 
 * @author Arthur Mytsko
 */

#include "IOFunctions.h"
#include <iostream>

using namespace std;

void PrintBinCode(long pNumber)
{
	UL ulMask = -1;
	ulMask = ~(ulMask >> 1);

	for(int i = 0; i < sizeof(long) * 8; i++)
	{
		printf("%d", (pNumber & ulMask) != 0);
		ulMask >>= 1;
	}
}


UL ValidInput()
{
  	char *cBuffer = new char[100];
	UL Result;

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
		break;
	}
	return atol(cBuffer);
};