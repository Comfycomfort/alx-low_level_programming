#include "main.h"

/**
 * _isalpha - checks char  for alphabet character
 * @c: character to be checked
 * Return: 1 if char is an alpabet, 0 if it is not an alphabet
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
