#include "main.h"
/**
*
*
*
*
*/
void more_numbers(void)
{
int j = 0;
int i;
while (j < 10)
{
i = 0;
while (i <= 14)
{
if (i / 10 > 0)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
i++;
}
_putchar('\n');
j++;
}
}
