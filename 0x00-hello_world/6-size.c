#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using the main function
 * this program prints "the size of various types"
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %d byte(s)\n", (int) sizeof(char));
	printf("size of an int: %d byte(s)\n", (int) sizeof(int));
	printf("size of a long int: %d byte(s)\n", (int) sizeof(long int));
	printf("size of a long long int: %d byte(s)\n", (int) sizeof(long long int));
	printf("size of a float: %d byte(s)\n", (int) sizeof(float));
	return (0);
}
