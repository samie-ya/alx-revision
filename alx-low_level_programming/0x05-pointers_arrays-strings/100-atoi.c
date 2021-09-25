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
*/
int _atoi(char *s)
{
int i = 0;
int sign = 1;
unsigned int rev = 0;
for (; s[i] != '\0'; i++)
{
if (s[i] == '-')
{
sign *= -1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
rev = (rev * 10) + (s[i] - '0');
}
else if (rev > 0)
{
break;
}
}
return (rev *sign);
}
