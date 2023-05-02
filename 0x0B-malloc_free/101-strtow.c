#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * wordCounter - figures out the number of words in a string
 * @str: string input
 *
 * Return: word count
 */

int wordCounter(char *str)
{
	int i, state = 0, words = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			state = 0;
		else
		{
			if (state == 0)
			{
				state = 1;
				words++;
			}
		}
	}

	return (words);
}

/**
 * stringLength - counts number of characters in a string
 * @str: string input
 *
 * Return: length of string
 */

int stringLength(char *str)
{
	int i, length = 0;

	for (i = 0; str[i] != '\0'; i++)
		length++;

	return (length);
}

/**
 * strtow - slice up a string into individual words
 * @str: string input
 *
 * Return: pointer to 2D array
 */

char **strtow(char *str)
{
	int words, length = 0, characters = 0, wBegining, wEnd, i, k = 0;
	char **pointer;
	char *holder;

	words = wordCounter(str);
	length = stringLength(str);

	if (str == NULL || length == 0 || (str[0] == ' ' && length == 1))
		return (NULL);

	pointer = malloc(sizeof(char *) * (words + 1));
	if (pointer == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (characters)
			{
				wEnd = i;
				holder = malloc(sizeof(char) * (characters + 1));

				if (holder == NULL)
					return (NULL);
				while (wBegining < wEnd)
					*holder++ = str[wBegining++];
				*holder = '\0';
				pointer[k] = holder - characters;
				k++;
				characters = 0;
			}
		}
		else if (characters++ == 0)
			wBegining = i;
	}
	pointer[k] = NULL;

	return (pointer);
}
