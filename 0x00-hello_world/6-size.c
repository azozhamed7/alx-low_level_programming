#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 ( success)
 */
int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byts(s)\n", sizeof(long int));
	printf("Size of a long long int: %lld byts(s)\n", sizeof(long long int));
	printf("Size of a float: %f byts(s)\n", sizeof(float));
	return (0);
}
