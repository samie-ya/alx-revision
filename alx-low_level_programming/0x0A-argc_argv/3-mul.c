#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*
*
*
*
*
*
*/

int main(int ac, char *av[])
{
	int res, j, k;


	if (ac != 3)
	{
		printf("Error\n");
		return (1);
	}
	j = atoi(av[1]);
	k = atoi(av[2]);
	res = j * k;
	printf("%d\n", res);
	return (0);
}
