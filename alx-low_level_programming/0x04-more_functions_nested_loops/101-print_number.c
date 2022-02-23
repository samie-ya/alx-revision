#include "main.h"

/**
 * print_number- to print number without hard coding
 *
 * @n: the number to be printed
 *
 * Return: Nothing
 */

void print_number(int n)
{
	int num;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	num = n;
	if (num / 10 > 0)
	{
		print_number(num / 10);
		_putchar((num % 10) + '0');
	}
	else
	{
		_putchar(num + '0');
	}
}
