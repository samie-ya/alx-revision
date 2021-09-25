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
*/
char *_strdup(char *str)
{
char *dest;
int i = 0;
int j;
if (str == 0)
{
return (0);
}
while (str[i] != '\0')
{
i++;
}
dest = malloc(sizeof(char) * (i + 1));
if (dest == 0)
{
return (0);
free(dest);
}
j = 0;
for (i = 0; str[i] != '\0'; i++)
{
dest[j] = str[i];
j++;
}
dest[j] = '\0';
return (dest);
}
