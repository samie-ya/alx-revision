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
int a;
int b;
for (i = 0; i < 100; i++)
{
a = i / 10;
b = i % 10;
if (!(b <= a))
{
putchar((a) + '0');
putchar((b) + '0');
if (a == 8 && b == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
