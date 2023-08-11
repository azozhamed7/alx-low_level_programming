#include <stdio.h>
/**
 *main - 5-print_numbers.c
 *Return: alwys (0)
 */
int main(void)
{
	int n;

	for (n = 26; n > 0; n--)
	{
		putchar(n - 122);
	}
	putchar ('\n');
	return (0);

}
