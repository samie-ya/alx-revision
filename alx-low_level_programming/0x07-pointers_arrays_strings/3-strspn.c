#include "main.h"

/**
*
*
*
*
*
*/

unsigned int _strspn(char *s, char *accept)
{
int i;
int j;

i = 0;
while (s[i] != '\0' )
{
	j = 0;
	while (accept[j] != '\0')
	{
		if (s[i] == accept[j])
		{
			break;
		}
	j++;
	}
	if (!accept[j])
		return(i);
i++;
}
return (i);
}
