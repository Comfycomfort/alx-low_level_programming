#include <stdio.h>

/**
 *main - This is my entry point for the program
 *Return: 0
 */

int main(void)
{
	int tens;
	int ones;

	for (tens  = '0'; tens <= '9'; tens++) /*print tens place*/
	{
		for (ones = '0'; ones <= '9'; ones++) /*print ones place*/
		{
			putchar(tens);
			putchar(ones);
			if (!(tens == '9' && ones == '9')) /*skip comma at end*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
