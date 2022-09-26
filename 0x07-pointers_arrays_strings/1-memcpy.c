#include "main.h"
/**
 *  function copies n bytes from memory area src to memory area dest
 *
 *  Returns a pointer to dest
 *
 *  @n: number of bytes to copy
 *  @dest: destination of copy
 *  @src: memory area to copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for(i =0; i<n; i++)
	{
		dest[i] = src[i];
	}

	return(dest);
}
