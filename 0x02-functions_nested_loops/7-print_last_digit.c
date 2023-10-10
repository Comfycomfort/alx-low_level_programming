#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: check for  integer
 * * Return: last digit of number
 */

int print_last_digit(int n)
{
	int n;

	if (n < 0)
	n = -n;

	a = n % 10;

	if (a < 0)
		n = -a;

_putchar(n + '0');
return (a);
}
