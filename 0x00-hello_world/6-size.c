#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 ( success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", Sizeof(char));
	printf("Size of an int: %lu byte(s)\n", Sizeof(int));
	printf("Size of a long int: %lu byts(s)\n", Sizeof(long int));
	printf("Size of a long long int: %lu byts(s)\n", Sizeof(long long int));
	printf("Size of a float: %lu byts(s)\n", Sizeof(float));
	return (0);
}
