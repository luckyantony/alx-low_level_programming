#include <stdio.h>
/**
* main - School students attendance.
*
* Return: 0
*/
int main(void)
{
int count;
long int x = 1;
long int y = 2;
long int z = 0;
printf("%lu, ", x);
printf("%lu, ", y);
for (count = 3; count <= 50; count++)
{
z = x + y;
x = y;
y = z;
if (count < 50)
{
printf("%lu, ", z);
}
else
{
printf("%lu\n", z);
}
}
return (0);
}
