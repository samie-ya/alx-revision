#include "main.h"
/**
*
*
*
*
*
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
if (j < n)
{
dest[i + j] = src[j];
}
j++;
}
dest[i + j] = '\0';
return (dest);
}
