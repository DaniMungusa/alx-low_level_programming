#include "main.h"
/**
*swap_int - swap two integers
*@a: first int
*@b: second int
*Return: Always 0.
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
