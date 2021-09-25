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
*/
int main(void)
{
int i;
int a;
int b;
int c;
for (i = 0; i < 1000; i++)
{
a = ((i / 10) / 10);
b = ((i / 10) % 10);
c = (i % 10);
if ((c > b) && (b > a))
{
putchar((a) + '0');
putchar((b) + '0');
putchar((c) + '0');
if (a == 7 && b == 8 && c == 9)
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
