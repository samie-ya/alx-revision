#include "main.h"

/**
*
*
*
*
*
*
*/

char *_strchr(char *s, char c)
{
int i;
	i = 0;
	while(*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
		return (s);
		}
	s++;
	}
	return (0);
}
