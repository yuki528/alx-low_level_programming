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
	int m = 0; n=0;

	while (haystack[m])
	{

		while (needle[n] && (haystack[m] == needle[0]))
		{

			if(haystack[m + n] == needle[n])
				n++;
			else
				break;
		}
		if(needle[n])
		{
			m++;
			n=0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
