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
*
*/
int **alloc_grid(int width, int height)
{
int **dest;
int i = 0;
int j = 0;
if (width <= 0 || height <= 0)
{
return (0);
}
dest = malloc(sizeof(int *) * height);
for (i = 0; i < height; i++)
{
dest[i] = malloc(sizeof(int) * width);
}
if (dest == 0)
{
for (i = 0; i < height; i++)
{
free(dest[i]);
}
free(dest);
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
