#include "main.h"
#include <stdlib.h>

/**
*
*
*
*
*
*/

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit (98);
	return (a);
}
