#include <stdio.h>
/**
 *main - 5-print_numbers.c
 *Return: alwys (0)
 */
int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
	}
	putchar ('\n');
	return (0);
}
