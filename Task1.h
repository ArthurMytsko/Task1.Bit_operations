/**
 * @file  Task1.h
 * @brief Contains declaration of functions of Task1
 */
#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

 /**
   * @brief      This function check if number belongs to {1,2,4,8,16...}
   * @param	[in] ulNumber number which must be checked
   * @remark	 uses only bit and arithmetic operations
   * @return	 1 - number is power of two, 0 - no
   */
bool PowerOfTwo(unsigned long int ulNumber);

 /**
   * @brief      This function implement set bits
   * @param	[in] iLength length of bits wich must be set
   * @param [in] iStart starting bit
   * @remark	 uses only bit and arithmetic operations
   * @return	 unginged long number with relevant bit set
   */
unsigned long SetBits(int iLength, int iStart);
#endif