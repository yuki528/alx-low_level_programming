#include<stdlib.h>
#include <main.h>
/**
 * function that locates a character in a string.
 *
 * Returns a pointer to the first occurrence of the character c
 *
 * returns NULL if the character is not found
 *
 */

char *_strchr(char *s, char c)
{
	while(*s)
	{
		if(*s != c)
		{
			s++;
		}
		else
			return(s);
	}
	if( c == '\0')
	{
		return (s);
	}
	return (NULL);
}
