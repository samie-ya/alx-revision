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
void puts_half(char *str)
{
int i = 0;
int n;
while (str[i] != '\0')
{
i++;
}
if (i % 2 == 0)
{
n = i / 2;
for (; n <= i - 1; n++)
{
_putchar(str[n]);
}
}
else
{
n = (i - 1) / 2;
n = n + 1;
for (; n <= i -1; n++)
{
_putchar(str[n]);
}
}
_putchar('\n');
}
