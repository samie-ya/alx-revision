#include "main.h"
/**
*
*
*
*
*
*/
char *_strcpy(char *dest, char *src)
{
int i;
int j;
int k;
i = 0;
while (src[i] != '\0')
{
i++;
}
k = i - 1;
for (j = 0; j <= k; j++)
{
dest[j] = src[j];
}
dest[j] = '\0';
return (dest);
}
