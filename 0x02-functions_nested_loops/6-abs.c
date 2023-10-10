#include "main.h"

/**
 * _abs - compute the  absolute value of integer
 * @n: integer is to be checked for argument
 * Return: 0
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);

	return (0);
}
