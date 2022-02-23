#include "main.h"
#include <stdlib.h>

/**
*
*
*
*
*
*
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *dest;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	dest = malloc(sizeof(size) * (nmemb + 1));
	if (dest == NULL)
	{
		return (NULL);
		free(dest);
	}
	for (i = 0; i < nmemb; i++)
	{
		dest[i] = 0;
	}
	dest[i] = '\0';
	return (dest);
}
