#include "dog.h"

/**
*
*
*
*
*
*
*
*/

void print_dog(struct dog *d)
{
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	printf("Name: (nil)\n", d->name);
	if (d->age != 0)
		printf("Age: %f\n", d->age);
	printf("Age: (nil)\n", d->age);
	if(d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	printf("Owner: (nil)\n", d->name);
}
