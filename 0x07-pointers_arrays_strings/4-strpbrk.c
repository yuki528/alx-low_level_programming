#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to check
 * @accept: string to check against
 *
 * Return: pointer to byte in s that matches or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while(*s)
	{
		
		for(i =0; accept[i]; i++)
		{
			
			if(*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
