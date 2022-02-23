#include "main.h"
#include <stdlib.h>

/**
*
*
*
*
*
*/

char *_strdup(char *str)
{
	int i, j;
	char *dest;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	dest = malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{	
		dest[j] = str[j];
	}
	dest[j] = '\0';
	return (dest);
}
