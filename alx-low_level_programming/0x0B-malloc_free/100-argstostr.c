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
char *argstostr(int ac, char **av)
{
char *dest;
int i;
int j = 0;
if (ac == 0 || av == 0)
{
return (0);
}
dest = malloc(sizeof(char) * ac);
if (dest == 0)
{
return (0);
free(dest);
}
for (i = 0; i < ac; i++)
{
dest[j] = *(av + i);
j++;
_putchar('\n');
}
return (dest);
}
