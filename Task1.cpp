/**
 * @file   task1.cpp
 * @brief  Implement bit operation functions from Task1
 * @author Arthur Mytsko
 */
#include "Task1.h"

bool PowerOfTwo(UL ulNumber) // 15
{
	return (ulNumber & ulNumber - 1) == 0;
}


UL SetBits(int iLength, int iStart) // 16
{
	UL ulTemp = -1; // 111..111

	return ~(ulTemp << iLength) << iStart - 1;
}

//UL ABSDifference(long lNum1, long lNum2) // 17
//{
//	long lDifference = lNum1 - lNum2;
//	return (lDifference > 0) & lDifference | 
//		   (lDifference < 0) & (~lDifference + 1);
//}

bool TwoSetBit(UL ulNumber)
{
	return (ulNumber & ulNumber >> 1) != 0;
}
