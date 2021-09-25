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
*
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (src[i] != '\0')
{
i++;
}
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
