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
   * @brief      This function seek next even number
   * @param	[in] ulNumber given number
   * @remark	 uses only bit and arithmetic operations
   * @return	 next even number
   */
UL NextParNum(UL ulNumber); // task 1

 /**
   * @brief      This function sort number in inceasing
   * @param	[in] pulNum1 pointer to first number
   * @param	[in] pulNum2 pointer to second number
   * @remark	 uses only bit and arithmetic operations
   * @return	 void
   */
void SortNums(long* pulNum1, long* pulNum2); // task 2

 /**
   * @brief      This function check bits in given positions
   * @param	[in] ulNumber given number
   * @param	[in] ucBit1 first bit position
   * @param	[in] ucBit2 second bit position
   * @remark	 uses only bit and arithmetic operations
   * @return	 1 - bits are different, 0 - are not
   */
bool CheckBits(UL ulNumber, UCH ucBit1, UCH ucBit2); // task 3

 /**
   * @brief      This function check if number belongs to {1,2,4,8,16...}
   * @param	[in] ulNumber number which must be checked
   * @remark	 uses only bit and arithmetic operations
   * @return	 1 - number is power of two, 0 - no
   */
bool PowerOfTwo(UL ulNumber); // task 15

 /**
   * @brief      This function implement set bits
   * @param	[in] iLength length of bits wich must be set
   * @param [in] iStart starting bit
   * @remark	 uses only bit and arithmetic operations
   * @return	 unginged long number with relevant bit set
   */
UL SetBits(UCH iLength, UCH iStart); // task 16

 /**
   * @brief      This function return absolute value
   *			 of the difference of two number
   * @param	[in] lNum1 first number 
   * @param [in] lNum2 second number
   * @remark	 uses only bit and arithmetic operations
   * @return	 abs(iNum1 - iNum2)
   */
UL ABSDifference(long lNum1, long lNum2); // task 17

 /**
   * @brief      This funstion find two consecutive ones bit
   * @param	[in] ulNumber - number to find 
   * @remark	 uses only bit and arithmetic operations
   * @return	 1 - ulNumber have two adjacent bits, 0 - no
   */
bool TwoSetBit(UL ulNumber); // task 18

 /**
   * @brief      This funstion swaps neighboring groups of 4 bits
   * @param	[in] ulNumber given number
   * @remark	 uses only bit and arithmetic operations
   * @return	 Number with swapings group of 4 bits
   */
UL Swap4Bits(UL ulNumber); // task 19

 /**
   * @brief      This funstion implement cycle shift to ucLen bits left
   * @param	[in] ulNumber given number
   * @param	[in] ucLen length to hsift
   * @remark	 uses only bit and arithmetic operations
   * @return	 Shifted number
   */
UL CycleShift(UL ulNumber, UCH ucLen); // task 20

 /**
   * @brief      This funstion set last '1' bit to '0'
   * @param	[in] ulNumber given number
   * @remark	 uses only bit and arithmetic operations
   * @return	 Result number
   */
UL UnSetaLastBit(UL ulNumber); // task 25

#endif  /* _TASK1_H_ */