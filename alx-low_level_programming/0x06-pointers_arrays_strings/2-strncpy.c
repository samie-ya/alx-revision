#include "main.h"
/**
*
*
*
*
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (src[i] != '\0')
{
if (i < n)
{
dest[i] = src[i];
}
i++;
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
