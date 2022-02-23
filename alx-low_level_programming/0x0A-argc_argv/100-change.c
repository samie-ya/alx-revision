#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - to make change
 *
 * @ac: number of command lines
 *
 * @av: argument of command line
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	int cent, i;
	if (ac == 1)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(av[1]);
	cent = 0;
	while (i != 0)
	{
		cent++;
		if (i - 25 >= 0)
		{
			i = i - 25;
			continue;
		}
		if (i - 10 >= 0)
		{
			i = i - 10;
			continue;
		}
		if (i - 5 >= 0)
		{
			i = i - 5;
			continue;
		}
		if (i - 2 >= 0)
		{
			i = i - 2;
			continue;
		}
		if (i - 1 >= 0)
		{
			i = i - 1;
			continue;
		}
	}
	printf("%d\n", cent);
	return (0);
}
