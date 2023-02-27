#include "main.h"

/**
 * puts2 - Prints 1 character out of 2 string.
 *@str: The string to processed.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
