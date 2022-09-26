#include "main.h"
#include <stdlib.h>
/**
 *
 * function that searches a string for any of a set of bytes
 *
 * function that searches a string for any of a set of bytes
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	while(*s)
	{
		for(i =0; accept[i]; i++)
		{
			if(*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
