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
char *create_array(unsigned int size, char c)
{
char *dest;
unsigned int i;
if (size == 0)
{
return (0);
}
dest = malloc(sizeof(int) * size);
if (dest == 0)
{
return (0);
free(dest);
}
for (i = 0; i < size; i++)
{
dest[i] = c;
}
return (dest);
}
