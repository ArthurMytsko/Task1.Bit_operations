/**
 * @file   task1.cpp
 * @brief  Implement bit operation functions from Task1
 * @author Arthur Mytsko
 */
#include "Task1.h"

UL NextParNum(UL ulNumber) // task 1
{
	return (ulNumber & -2) + 2;
}

void SortNums(long* pulNum1, long* pulNum2) // task 2
{
	long ulNum1 = *pulNum1;

	UL ulDiffSign = (*pulNum1 - *pulNum2) >> (sizeof(long) << 3 - 1);
	*pulNum1 = (*pulNum1 & ulDiffSign) | (*pulNum2 & ~ulDiffSign);
	*pulNum2 = (ulNum1 & ~ulDiffSign)  | (*pulNum2 & ulDiffSign);
}

bool CheckBits(UL ulNumber, UCH ucBit1, UCH ucBit2) // task 3
{
	ucBit1 &= (sizeof(long) << 3) - 1;
	ucBit2 &= (sizeof(long) << 3) - 1;
	return ( (ulNumber >> ucBit1) ^ (ulNumber >> ucBit2) ) & 0x1;
}

bool PowerOfTwo(UL ulNumber) // task 15
{
	return (ulNumber & ulNumber - 1) == 0;
}


UL SetBits(UCH iLength, UCH iStart) // task 16
{
	return ~(-1 << iLength) << (iStart & ( (sizeof(long) << 3) - 1) );
}

UL ABSDifference(long lNum1, long lNum2) // task 17
{
	long lDifference = lNum1 - lNum2;
	long lAllSignBits = lDifference >> ( (sizeof(long) << 3) - 1);
	return (lAllSignBits ^ lDifference) - lAllSignBits;
}

bool TwoSetBit(UL ulNumber) // task 18
{
	return (ulNumber & ulNumber >> 1) != 0;
}

UL Swap4Bits(UL ulNumber) // task 19
{
	UL ulMask = 0x0f0f0f0f0f0f0f0f;
	return ( (ulNumber & ulMask) << 4) | ( ( (ulNumber & (ulMask << 4) ) >> 4) );
}

UL CycleShift(UL ulNumber, UCH ucLen) // task 20
{
	UL ulMask = -1;
	UCH ucLongBits = sizeof(long) << 3;
	UCH ucRealLen = ucLen & ucLongBits - 1; // ucLen mod 32(64)
	return ( (~(ulMask >> ucRealLen) & ulNumber) >> (ucLongBits - ucRealLen) ) | 
		(ulNumber << ucRealLen);
}

UL UnSetaLastBit(UL ulNumber) // task 25
{
	return (ulNumber - 1) & ulNumber;
}

