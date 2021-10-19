#include <stdio.h>
#include "main.h"

/**
*
*
*
*
*
*/

int fibonacci(int n)
{
	if (n == 1)
		return (1);
	if (n == 2)
		return (2);
	return (fibonacci(n -1) + fibonacci(n - 2));
}
