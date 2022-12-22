#include <stdio.h>
#include <ctype.h>

/**
 * main: Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	char b = 'A';

	while (a <= 'z')
	{
		putchar(tolower(a));
		a++;
	}

	while (b <= 'Z')
	{
		putchar(toupper(b));
		b++;
	}
	putchar('\n');
	return (0);
}
