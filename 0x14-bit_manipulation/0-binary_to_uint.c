#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"
unsigned int power(int x, int y);
/**
* binary_to_uint - convert binary to unsigned int
* @b: the given binary number
*
* Return: the converted number
**/
unsigned int binary_to_uint(const char *b)
{
unsigned int num;
int i, j;
i = 0;
num = 0;
if (b == '\0')
return (0);
while (b[i])
i++;
j = i - 1;
i = 0;
for (; j >= 0; j--)
{
if (b[i] != '0' && b[i] != '1')
return (0);
if (b[i] == '1')
num += power(2, j);
i++;
}
return (num);
}
/**
* power - finds the power of a number
* @x: the base
* @y: the power
*
* Return:  x power y
**/
unsigned int power(int x, int y)
{
unsigned int p;
p = 1;
while (y != 0)
{
p *= x;
y--;
}
return (p);
}
