/**
 * @file   CallFunctions.cpp
 * @brief  Implement functions to manage runing tasks with valid I/O data
 * @author Arthur Mytsko
 */
#include <stdio.h>
#include <stdlib.h>
#include "Task1.h"
#include "IOFunctions.h"

UL ulTemp1;
UL ulTemp2;
long lTemp1;
long lTemp2;
UCH ucTemp1;
UCH ucTemp2;

void RunTask1(void)
{
	system("cls");
	printf("Write a function wich retruns next even number.\n");
	ulTemp1 = ValidInput('x');
	PrintBinCode(ulTemp1);
	PrintBinCode(NextParNum(ulTemp1) ); // run task 1
	PrintInfo();
}

void RunTask2(void)
{
	system("cls");
	printf("Write a function wich organizes in \
increasing two long numbers.\n");
	lTemp1 = ValidInput('x');
	lTemp2 = ValidInput('y');
	SortNums(&lTemp1, &lTemp2); // run task 2
	PrintBinCode(lTemp1);
	PrintBinCode(lTemp2);
	PrintInfo();
}
void RunTask3(void)
{
	system("cls");
	printf("Write a function wich returns the '1' if \
the bits in 2-preset positions are different.\n");
	ulTemp1 = ValidInput('x');
	ucTemp1 = ValidInput('n');
	ucTemp2 = ValidInput('m');
	PrintBinCode(ulTemp1);
	printf("\n%d", CheckBits(ulTemp1, ucTemp1, ucTemp2) ); // run task 3
	PrintInfo();
}
void RunTask15(void)
{
	system("cls");
	printf("Write a function wichw returns 1 if the given \
unsigned long x is a power of 2(x = [0,1,2,4,8..]).\n");
	ulTemp1 = ValidInput('x');
	PrintBinCode(ulTemp1);
	printf("\n%d", PowerOfTwo(ulTemp1) ); // run task 15
	PrintInfo();
}
void RunTask16(void)
{
	system("cls");
	printf("Write a function wich returns an unsigned long \
that contains bits block length n, since the p-th \
bits (bits numbered 0 from right to left).\n");
	ucTemp1 = (UCH)ValidInput('p');
	ucTemp2 = (UCH)ValidInput('n');
	PrintBinCode(SetBits(ucTemp2, ucTemp1) ); // run task 16
	PrintInfo();
}
void RunTask17(void)
{
	system("cls");
	printf("Write a function wich returns the absolute value \
of the difference of two given long integers.\n");
	ulTemp1 = ValidInput('x');
	ulTemp2 = ValidInput('y');
	PrintBinCode(ulTemp1);
	PrintBinCode(ulTemp2);
	PrintBinCode(ABSDifference(ulTemp1, ulTemp2) ); // run task 17
	PrintInfo();
}
void RunTask18(void)
{
	system("cls");
	printf("Write a function wich returns 1 if the binary code for unsigned \
long x has no two consecutive ones and 0 - otherwise.\n");
	ulTemp1 = ValidInput('x');
	PrintBinCode(ulTemp1);
	printf("\n%d", TwoSetBit(ulTemp1) ); // run task 18
	PrintInfo();
}
void RunTask19(void)
{
	system("cls");
	printf("Write a function wich swapping the neighboring \
groups of 4 bits in a given unsigned long number.\n");
	ulTemp1 = ValidInput('x');
	PrintBinCode(ulTemp1);
	PrintBinCode(Swap4Bits(ulTemp1) ); // run task 19
	PrintInfo();
}
void RunTask20(void)
{
	system("cls");
	printf("Write a function wich implements a cyclic shift \
of an unsigned long number to r bits left.\n");
	ulTemp1 = ValidInput('x');
	ucTemp1 = ValidInput('r');
	PrintBinCode(ulTemp1);
	printf("r = %u\n", ucTemp1);
	PrintBinCode(CycleShift(ulTemp1, ucTemp1) ); // run task 20
	PrintInfo();
}
void RunTask25(void)
{
	system("cls");
	printf("Write a function wich clears(sets to 0) the youngest \
set to 1 bit in a given unsigned long number.\n");
	ulTemp1 = ValidInput('x');
	PrintBinCode(ulTemp1);
	PrintBinCode(UnSetaLastBit(ulTemp1) ); // run task 25
	PrintInfo();
}