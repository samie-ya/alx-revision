#include "main.h"
#include <stdlib.h>

/**
*
*
*
*
*
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *dest;

	dest = malloc(sizeof(char) * size);
	if (dest == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		dest[i] = c;
	}
	return (dest);
}
