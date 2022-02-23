#include "main.h"

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

char **strtow(char *str)
{
	char **tab;
	int i, j;

	tab = malloc(sizeof(char *) * 10);
	if (tab == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	for (j = 0; tab[j] != NULL; j++)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] != ' ' || str[i] != '\0')
			{
				tab[j][i] = str[i];
			}
			else
			{
				i++;
				tab[i] = '\0';
				break;
			}
		}
	}
	return (tab);
}
