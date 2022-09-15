#include "main.h"
/**
 * print_diagnol line n times on terminal
 * @n : times diagnal line printed
 * there is no return
 */

void print_diagonal(int n)
{
	int i,j;
	for(i = 0; i<n; i++)
	{
		for(j=0;j< i;j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if(i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
