#include "main.h"

/**

Returns the value of the bit at the given index in the input number.

If the index is out of range, returns -1.

@param n The input number.

@param index The index of the bit to retrieve.

@return The value of the bit at the given index, or -1 if index is out of range.
*/
int get_bit(unsigned long int n, unsigned int index)
{
// Check if index is out of range
if (index >= 64)
return (-1);

// Shift n to the right until the desired bit is at the least significant position
n >>= index;

// Mask the least significant bit to get the value of the desired bit
return (n & 1);
}
