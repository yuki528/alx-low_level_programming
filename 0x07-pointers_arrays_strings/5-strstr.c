#include "main.h"
/**
 * a function that locates a substring.
 *
 *  function finds the first occurrence of the substring needle in the string haystack
 *  The terminating null bytes (\0) are not compare
 *
 *  Returns a pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
