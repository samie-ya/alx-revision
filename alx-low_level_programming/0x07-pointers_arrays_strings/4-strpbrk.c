#include "main.h"

/**
*
*
*
*
*
*
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		if (!(*accept))
			return (0);
	s++;
	}
	return (s);
}
