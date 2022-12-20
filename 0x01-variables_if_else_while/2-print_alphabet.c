#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'A';
	for (int x = 0; x <= 25; x++)
	{
		putchar(tolower(a));
		a++;
	}
	return (0);
}
