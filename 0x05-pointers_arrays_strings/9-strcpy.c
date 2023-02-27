#include "main.h"

/**
 * _strcpy - Copy a string pointed
 * @dest: Copy of the string
 * @src: Origin of the string
 * Return: Destination destine copy
**/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
