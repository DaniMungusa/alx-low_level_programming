#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: string to be searched.
 * @accept: bytes to be searched for.
 *
 * Return: Always 0 (sucess)
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}
