#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints base 10 numbers
 * @void: Empty parameter list for main.
 *
 * Description: Prints numbers 0-9
 *
 * Return: 0 for success
*/
int main(void)
{
	int num = 38;

	while (num <= 47)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
