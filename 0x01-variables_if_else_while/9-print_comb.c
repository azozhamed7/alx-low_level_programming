#include <stdio.h>
/**
 *main - 5-print_numbers.c
 *Return: alwys (0)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
