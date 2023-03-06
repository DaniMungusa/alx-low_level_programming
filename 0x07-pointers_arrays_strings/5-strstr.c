#include "main.h"
#include <string.h>

/**
 * _strstr - A function that locates a substring
 * @haystack: String to search through
 * @needle: String to search for
 *
 * Return: Always 0 (success)
 */

char *_strstr(char *haystack, char *needle)
{
	char *i, *j;

	while (strlen(haystack))
	{
		i = haystack;
		j = needle;
		while (*j == *haystack && *haystack != 0
		       && *i != 0)
		{
			haystack++;
			j++;
		}
		if (*j == 0)
			return (i);
		haystack = i + 1;
	}
	return (0);
}
