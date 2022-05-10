include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
@@ -16,5 +17,27 @@ void *_calloc(unsigned int nmemb, unsigned int size)
	cal = malloc(nmemb * size);
	if (cal == NULL)
		return (NULL);
	_memset(cal, 0, nmemb * size);
	return (cal);
}
/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: mamory area to return
 * @b: constant byte
 * @n: size of bytes
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{

		*(s + i) = b;
		i += 1;
	}
	return (s);
}
