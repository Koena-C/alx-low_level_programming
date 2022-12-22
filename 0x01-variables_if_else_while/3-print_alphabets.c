#include <stdio.h>
#include <ctype.h>

/**
 * main: Entry - Point
 *
 * Return: Always 0 (Success)
 * To print alphabet in lowercase and uppercase
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
