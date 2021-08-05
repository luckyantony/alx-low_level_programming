#include <stdlib.h>
#include "holberton.h"
/**
* get_bit - find the value of a bit at a given index
* @n: the given number
* @index: the given index
*
* Return: value of a bit at index
**/
int get_bit(unsigned long int n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8)
return (-1);
n = n >> index;
n = n & 1;
return (n);
}
