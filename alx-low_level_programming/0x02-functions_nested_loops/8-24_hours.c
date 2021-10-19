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
*
*
*/
void jack_bauer(void)
{
int hr;
int min;
for (hr = 23; hr >= 0; hr--)
{
for (min = 59; min >= 0; min--)
{
_putchar((hr / 10) + '0');
_putchar((hr % 10) + '0');
_putchar(':');
_putchar((min / 10) + '0');
_putchar((min % 10) + '0');
_putchar('\n');
}
}
}
