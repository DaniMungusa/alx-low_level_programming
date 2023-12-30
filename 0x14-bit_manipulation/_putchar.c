#include <unistd.h>

/**
 * _putchar - Print a character to the standard output.
 * @c: The character to print.
 *
 * Return: Always 0
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
