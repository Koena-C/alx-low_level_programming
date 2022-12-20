#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		char to_lower = tolower(x);
		putchar(to_lower);
	}
	return (0);
}

