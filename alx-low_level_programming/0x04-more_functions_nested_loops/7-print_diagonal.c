#include "main.h"
/**
*
*
*
*
*
*
*
*/
void print_diagonal(int n)
{
int i;
int j;
if (n > 0)
{
i = 0;
while (i < n)
{
j = 0;
while (j <= i)
{
_putchar(' ');
j++;
}
_putchar(92);
_putchar('\n');
i++;
}
}
else
{
_putchar('\n');
}
}
