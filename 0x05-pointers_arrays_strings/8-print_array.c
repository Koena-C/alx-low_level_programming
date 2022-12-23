#include "main.h"
void print_array(int *a, int n)
{
	int i = 0;
	for (i; i < n; i++)
	{
		printf("%d", *(a + 1));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf('\n');
}
