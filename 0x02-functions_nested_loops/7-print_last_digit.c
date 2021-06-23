#include "holberton.h"
/**
* print_last_digit - to print last digit
* @w : integer
* Return: 0
*/
int print_last_digit(int w)
{
int s = w % 10;
if (w < 0)
s = s * -1;
_putchar(s + '0');
return (s);
}
