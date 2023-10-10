#include "main.h"

/**
 * print_alphabet - prints all  lowercase alphabet
 * Return: 0
 */

void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
