#include "main.c"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, e;

	i = 0;
	e = 0;

	while (dest[i] != '\0')
		i++;

	while (src[e] != '\0' && e < n)
	{
		dest[i] = src[e];
		i++;
		e++;
	}

	dest[i] = '\0';

	return (dest);
}
