#include "main.h"

/**
 *function that copies string
 *
 *
 *@dest: string to be overwritten
 *
 * @n: number of values to copy
 *
 * works exactly like strncpy
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for(i = 0; i <n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest)
}
