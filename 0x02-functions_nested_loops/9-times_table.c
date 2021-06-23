#include "holberton.h"
/**
* times_table - printing tables of 9
*
* Return:0
*/
void times_table(void)
{
int x, y;
int nine;
for (x = 0; x < 10; x++)
{
for (y = 0; y < 10; y++)
{
nine = x * y;
if (y == 0)
{
_putchar(nine + '0');
}
else if (nine <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(nine + '0');
}
else if (nine >= 10)
{
_putchar(',');
_putchar(' ');
_putchar(nine / 10 + '0');
_putchar(nine % 10 + '0');
}
}
_putchar('\n');
}
}
