/**
 * @file   Task1.h
 * @brief  Contains declaration of functions of Task1
 * @author Arthur Mytsko
 */
#ifndef _TASK1_H_
#define _TASK1_H_

typedef unsigned long UL;
typedef unsigned char UCH;

 /**
   * @brief      This function check if number belongs to {1,2,4,8,16...}
   * @param	[in] ulNumber number which must be checked
   * @remark	 uses only bit and arithmetic operations
   * @return	 1 - number is power of two, 0 - no
   */
bool PowerOfTwo(UL ulNumber); // 15

 /**
   * @brief      This function implement set bits
   * @param	[in] iLength length of bits wich must be set
   * @param [in] iStart starting bit
   * @remark	 uses only bit and arithmetic operations
   * @return	 unginged long number with relevant bit set
   */
UL SetBits(UCH iLength, UCH iStart); // 16

 /**
   * @brief      This function return absolute value
   *			 of the difference of two number
   * @param	[in] lNum1 first number 
   * @param [in] lNum2 second number
   * @remark	 uses only bit and arithmetic operations
   * @return	 abs(iNum1 - iNum2)
   */

//UL ABSDifference(long lNum1, long lNum2); // 17

 /**
   * @brief      This funstion find two adjacent bits
   * @param	[in] ulNumber - number to find 
   * @remark	 uses only bit and arithmetic operations
   * @return	 1 - ulNumber have two adjacent bits, 0 - no
   */
bool TwoSetBit(UL ulNumber); // 18


#endif  /* _TASK1_H_ */