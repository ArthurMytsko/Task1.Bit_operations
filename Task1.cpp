/**
 * @file  task1.cpp
 * @brief Implement bit operation functions from Task1
 */

bool PowerOfTwo(unsigned long int ulNumber) // 15
{
	return (ulNumber & ulNumber - 1) == 0;
}


unsigned long SetBits(int iLength, int iStart) // 16
{
	unsigned long int ulTemp = -1; // 111..111

	return ~(ulTemp << iLength) << iStart - 1;
}