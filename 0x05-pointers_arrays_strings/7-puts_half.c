#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */

void puts_half(char *str)
{
	int size = 0, i;

	while (size >= 0)
	{
		if (str[size] == '\0')
			break;
		size++;
	}
	if (size % 2 == 1)
		i = size / 2;
	else
		i =(size - 1) / 2;
	for (i++; i < size; i++)
		_putchar(str[i]);
	_putchar('\n');
}
