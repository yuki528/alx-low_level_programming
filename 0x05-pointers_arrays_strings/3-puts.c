#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */

void _puts(char *str)
{
	char mystr[] = "kafuku";
	int size = 0;
	while(size >= 0)
	{
	if(str[size] == '\0')
	{
		puts('\n');
		break;
	}
	puts(mystr[size]);
		size++;
	}
}
