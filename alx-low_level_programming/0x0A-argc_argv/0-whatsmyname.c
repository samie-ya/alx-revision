#include "main.h"
#include <stdio.h>

/**
*
*
*
*
*
*/

int main(int ac, char *av[])
{
	int i;

	for (i = 0; i < ac; i++)
	{
		printf("%s\n", *av);
	}
	return (0);
}
