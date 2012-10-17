/**
 * @file   IOFunctions.h
 * @brief  Contains declaration of I/O functions 
 * @author Arthur Mytsko
 */
#ifndef _IOFUNCTIONS_H_
#define _IOFUNCTIONS_H_

typedef unsigned long UL;
typedef unsigned char UCH;


 /**
   * @brief      This function print number in binary code
   * @param	[in] lNumber number to print
   * @return	 void
   */
void PrintBinCode(long lNumber);

 /**
   * @brief      This function implement valid inputing a long number
   * @return	 unginged long number wich was inputed
   */
UL ValidInput(void);


#endif  /* _IOFUNCTIONS_H_ */