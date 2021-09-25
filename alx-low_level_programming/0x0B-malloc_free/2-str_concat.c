#include "main.h"
#include <stdlib.h>
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
char *str_concat(char *s1, char *s2)
{
char *dest;
int i = 0;
int j = 0;
int k = 0;
int len;
if (s1 == 0)
{
s1 = "";
}
if (s2 == 0)
{
s2 = "";
}
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
len = i + j + 1;
dest = malloc(sizeof(char) * len);
if (dest == 0)
{
return (0);
free(dest);
}
if (k < len)
{
for (i = 0; s1[i] != '\0'; i++)
{
dest[k] = s1[i];
k++;
}
for (j = 0; s2[j] != '\0'; j++)
{
dest[k] = s2[j];
k++;
}
}
dest[k] = '\0';
return (dest);
}
