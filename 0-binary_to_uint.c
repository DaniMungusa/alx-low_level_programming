#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Convert a binary number to an unsigned int.
 * @b: Pointer to a string containing a binary number (0s and 1s)
 *
 * Return: Always 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int total = 0, power = 1;
int len;

if (b == NULL)
return (0);

for (len = 0; b[len] != '\0'; len++)
{
if (b[len] != '0' && b[len] != '1')
return (0);
}

for (len--; len >= 0; len--, power *= 2)
{
if (b[len] == '1')
total += power;
}

return (total);
}
