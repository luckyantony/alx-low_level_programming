#include <stdio.h>
#include "holberton.h"
/**
* set_bit - set bits at index to 1
* @n: the given numer
* @index: the given index
*
* Return: 1 for success -1 otherwise
**/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8)
return (-1);
*n = *n | (1 << index);
return (1);
}
