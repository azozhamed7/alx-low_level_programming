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
	}
	for (n = 0; n < 6; n++)
	{
		putchar(n + 97);
	}
	putchar('\n');
	return (0);

}
