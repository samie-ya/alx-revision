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
*/

int **alloc_grid(int width, int height)
{
	int i, j, **dest;

	if (width <= 0 || height <= 0)
		return (0);
	dest = malloc(sizeof(int *) * height);
	if (dest == 0)
		return (0);
	for (i = 0; i < height; i++)
	{
		dest[i] = malloc(sizeof(int) * width);
		if (dest[i] == 0)
			return (0);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			dest[i][j] = 0;
		}
	}
	return (dest);
}
