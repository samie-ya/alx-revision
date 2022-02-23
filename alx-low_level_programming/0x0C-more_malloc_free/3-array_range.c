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

int *array_range(int min, int max)
{
	int *dest;
	int i, k;

	if (min > max)
		return (0);
	dest = malloc(sizeof(int) * (max - min) + 1);
	if (dest == NULL)
	{
		return (NULL);
		free(dest);
	}
	k = max - min;
	for (i = 0; i <= k; i++)
	{
		dest[i] = min;
		min++;
	}
	dest[max - min] = '\0';
	return (dest);
}
