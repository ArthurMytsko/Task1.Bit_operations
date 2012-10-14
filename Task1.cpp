/**
 * @file  task1.cpp
 * @brief Implement bit operation functions from Task1
 */

bool PowerOfTwo(unsigned long ulNumber) // 15
{
	return (ulNumber & ulNumber - 1) == 0;
}


unsigned long SetBits(int iLength, int iStart) // 16
{
	unsigned long int ulTemp = -1; // 111..111

	return ~(ulTemp << iLength) << iStart - 1;
}

//unsigned long ABSDifference(long lNum1, long lNum2) // 17
//{
//	long lDifference = lNum1 - lNum2;
//	return (lDifference > 0) & lDifference | 
//		   (lDifference < 0) & (~lDifference + 1);
//}

bool TwoSetBit(unsigned long ulNumber)
{
	return (ulNumber & ulNumber >> 1) != 0;
}
