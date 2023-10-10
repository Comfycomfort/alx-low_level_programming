#include "main.h"

/**
 * print_alphabet_x10 - print the lowercase alphabets ten times
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char alpha;
	int t;

	for (t= 1; t <= 10; t++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
