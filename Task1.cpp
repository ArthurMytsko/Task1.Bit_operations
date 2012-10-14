/**
 *@file  task1.cpp
 *@brief Implement bit operation functions from Task1
 */

bool PowerOfTwo(unsigned long int x)
{
	return (x & x - 1) == 0;
}