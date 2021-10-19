#include "main.h"
#include <stdio.h>

/**
 * main- check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, i;

 	n = 98;
 	printf("1, 2");

 	for (i = 3; i < n; i++)
 	{
 		printf ("%d", fibonacci(n));

 		if (i < n - 1)
 			printf(" ,");
		else
 			continue;
 	}
	return (0);
}
