#include "main.h"
/**
 * print most number 0-9
 * neither 2 nor 4
 * returns no return
 */
void print_most_numbers(void)
{
	int ch;

	for(ch = 48; ch < 58; ch++)
	{
		if(ch != 50 && ch != 52)
			_putchar(ch);
	}
	_putchar('\n')
}
