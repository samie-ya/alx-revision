#include "main.h"
#include <stddef.h>
/**
*
*
*
*/
int _atoi(char *s)
{
	int i;
	int sign = 1;
	unsigned int res = 0;

	i = 0;
	while (s[i] != '\0')
	{
		if (s == NULL)
			return (0);
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{	
			res = (res * 10) + (s[i] - '0');
		}
		else if (res > 0)
		break;
	i++;
	}
	return (res * sign);
}
