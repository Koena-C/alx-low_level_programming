#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	while (a <= 'z')
	{
		putchar(tolower(a));
		a++;
	}
	return (0);
}
