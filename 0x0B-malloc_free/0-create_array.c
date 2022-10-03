#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *cs;

	if(size == 0)
		return(NULL);

	cs = malloc(sizeof(c) * size);

	if (cs == NULL)
		return(NULL);

	for(i = 0; i < size; i++)
		cs[i] = c;
	return (cs);
}
