#include "main.h"
/**
 * positive_ornegative - zero is zero
 *
 * Return: (0)
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d ids negative\n", i);
	}
	else if (i > 0)
	{
		printf("%d is posative \n", i);
	}
	else
	{
		printf("%d is zero \n", i);
	}
}
