#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
* clear_bit - set nth value at index to 0
* @n: the given bit
* @index: the given index
*
* Return: 1 for success -1 otherwise
**/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int temp;
if (index > sizeof(unsigned long int) * 8)
return (-1);
temp = *n ^ (1 << index);
*n &= temp;
return (1);
}
