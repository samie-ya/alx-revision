#include "main.h"

/**
*
*
*
*
*
*/
void puts_half(char *str)
{
int i;
int n;
int j;
i = 0;
while (str[i] != '\0')
{
i++;
}
if ((i % 2) == 0)
{
n = i / 2;
for (j = n; j <= i - 1; j++)
{
_putchar(str[j]);
}
}
else
{
n = ((i - 1) / 2);
n = n + 1;
for (j = n; j <= i - 1; j++)
{
_putchar(str[j]);
}
} 
_putchar('\n');
}
