#include <stdio.h>
/**
 *main - 5-print_numbers.c
 *Return: alwys (0)
 */
int main(void)
{
	int n;

	for (n = 0; n < 26; n++)
	{
		putchar(n + 97);
	}
	for (n = 0; n < 26; n++)
	{
		putchar(n + 65);
	}
	putchar('\n');
	return (0);

}
