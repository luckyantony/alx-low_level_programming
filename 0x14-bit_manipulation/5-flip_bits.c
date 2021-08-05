#include <stdio.h>
#include "holberton.h"
/**
* flip_bits - find number of bits required to change one number to another
* @n: the first number
* @m: the second number
*
* Return: the number of bits needs to be changed
**/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int b = 0;
unsigned long int rslt;
rslt = n ^ m;
while (rslt > 0)
{
if (rslt & 1)
b++;
rslt = rslt >> 1;
}
return (b);
}
