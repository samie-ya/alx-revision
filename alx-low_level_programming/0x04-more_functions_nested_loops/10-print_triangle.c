#include "main.h"
/**
*
*
*
*
*
*
*
*
*/
void print_triangle(int size)
{
int i;
int j;
if (size > 0)
{
i = 0;
while (i < size)
{
j = 0;
while (j < size)
{
if (i <= size - 1)
{
_putchar(' ');
}
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
else
{
_putchar('\n');
}
}
