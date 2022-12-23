#include "main.h"

/**
 * 1-swap - function that swaps the values of two int
 * @a: integer pointer
 * @b: integer pointer
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int new_int = *a;
	*a = *b;
	*b = new_int;
}
