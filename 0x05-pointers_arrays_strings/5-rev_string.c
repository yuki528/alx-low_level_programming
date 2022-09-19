#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */

void rev_string(char *s)
{
	int size = 0, i, j;
	char *str, temp;

	while(size >= 0)
	{
		if(s[size] == '\0')
			break;
		size++;
	}
	str = s;
	for(i=0; i<(size - 1); i++)
	{
		for(j = i+1; j>0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}

}
