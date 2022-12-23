#include "main.h"

/**
 * _strlen - function that returns length of the string
 * @s: char pointer
 * Return: count
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
