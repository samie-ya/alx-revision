#include <stdio.h>
/**
*
*
*
*
*
*
*
*
*
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + 48);
if (i == 9)
{
continue;
}
else
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
