#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = 'a';
	char b = 'a';

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
