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


UL ValidInput(bool bSign)
{
	char *buffer = new char[100];
	UL Result;

	gets_s(buffer, 100);

	if((buffer[0] == '-')&&(bSign))

	printf(buffer);
	while(true)
		try
		{
			Result = atol(buffer);
			break;
		}
		catch(char* str)
		{
			printf("Wrong number. Try again..\n");
		}

	//if((buffer[0] == '-')&&(chSign))
	//	ucPos = 1;
	//else if ((buffer[0])
	return Result;
}