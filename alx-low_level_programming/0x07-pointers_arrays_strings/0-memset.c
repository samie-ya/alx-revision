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
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (s[i] != '\0')
{
i++;
}
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
