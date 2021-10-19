#include "main.h"
#include <stddef.h>

/**
*
*
*
*
*
*
*
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1, l2, i, max, carry, k;

	if (r == NULL)
		return (0);
	l1 = _len(n1);
	l2 = _len(n2);

	max = (l1 < l2) ? (l2) : (l1);

	for (i = 0; i < l1; i++)
		n1[i] = n1[l1 - i - 1] - '0';

	for (i = 0; i < l2; i++)
		n2[i] = n2[l2 - i - 1] - '0';

	carry = 0;
	for (k = max; k >= 0; k--)
	{
		r[k] = (n1[k] + n2[k] + carry) % 10;
		if ((n1[k] + n2[k] + carry) >= 10)
		{
			carry = ((n1[k] + n2[k] + carry) / 10);
		}
		else
		{
			carry = 0;
		}
	}
	r[max] = '\0';
	if (size_r < max)
	{
		return (0);
	}
	return (r);
}

/**
*
*
*
*
*
*
*
*/

int _len(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
	i++;
	}
	return (i);
}
