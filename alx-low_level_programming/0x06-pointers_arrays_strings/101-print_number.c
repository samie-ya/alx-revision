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
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
continue;
}
if (n == 0)
{
_putchar('0');
continue;
}
if (n < 100 && n != 0)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
continue;
}
if (n < 1000 && n != 0)
{
_putchar((n / 100) + '0');
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
}
