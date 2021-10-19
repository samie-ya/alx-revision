#include "main.h"

/**
*
*
*
*
*
*
*/

char *leet(char *s)
{
	int i;
	int j;
	char a[] = "AEOTL";
	char b[] = "43071";

	i = 0;
	while(s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == a[j])
				s[i] = b[j];
			if (s[i] == a[j] + 32)
				s[i] = b[j];
		}
	i++;
	}
	return (s);
}
