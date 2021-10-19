#include "main.h"

/**
*
*
*
*
*
*
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*needle == *haystack)
			return (haystack);
		if (!(*needle))
			return (0);
	haystack++;
	}
	return (haystack);
}
