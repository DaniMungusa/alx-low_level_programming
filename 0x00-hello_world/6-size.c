#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main (void)
{
	char 1;
	int 2;
	long int 3;
	long long 4;
	float 5;

printf("Size of a char: %lu byte(s)\n", (unsigned long)
sizeof(1));
printf("Size of an init: %lu byte(s)\n", (unsigned long)
sizeof(2));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)
sizeof(3));
printf("Size of a long long: %lu byte(s)\n", (unsigned long)
sizeof(4));
printf("Size of a float: %lu byte(s)\n", (unsigned long)
sizeof(5));
return (0);
}



