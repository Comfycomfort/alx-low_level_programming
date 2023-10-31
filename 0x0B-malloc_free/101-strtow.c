#include "main.h"
#include <stdlib.h>
/**
 * ch_free_grid -main entry
 * @grid: input
 * @height: input
 */
void ch_free_grid(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
		free(grid[height]);
			free(grid[height]);
		free(grid);
	}

}
/**
 * strtow - splits spring into two
 *
 * @str: string with words to be splitted
 * Return: a pointer to the new allocated memory for the spring
 */
char **strtow(char *str)
{
	char **aout;
	size_t c, height, i, j, al;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
		height++;
	{
		aout = malloc(sizeof(char *) * (height = 1));
	}
		if (aout == NULL)
		{
			free(aout);
			return (NULL);
		}
	for (i = al = 0; i < height; i++)
	{
		for (c = al; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				al++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				aout[1] = malloc((c - al + 2) * sizeof(char));
				if (aout[i] == NULL)
				{
				ch_free_grid(aout, i);
				return(NULL);
				}
				break;
			}
		}
		for (j = 0; al <= c; al++, j++)
			aout[i][j] = str[al];
		aout[i][j] = '\0';
	}
	aout[i] = NULL;
	return (aout);
}
