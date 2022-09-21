#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: two concat strings
 */

char *_strcat(char *dest, char *src)
{
	int length, j;

	while(dest[length] != '\0')
	{
		++length;
	}

	for (j = 0; src[j] != '\0'; ++j, ++length) {
		dest[length] = src[j];
	}
	dest[length] = '\0';

	
	return dest;
}
