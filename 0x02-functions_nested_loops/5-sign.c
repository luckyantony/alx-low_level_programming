#include "holberton.h"
/**
* print_sign - prototype to print sign of number
*@x : integer
* Return: 0
*/
int print_sign(int x)
{
if (x > 0)
{
_putchar('+');
return (1);
}
else if (x == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
