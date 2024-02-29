#include "main.h"

/**
 * char *_strcpy - a function that copy the string poited to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int e = 0;

	while (*(src + l) != '\0')
	{
		1++;
	}
		for ( ; e < l ; e++)
		{
			dest[e] = src{e};
		}
		dest[1] = '\0';
		return (dest);
}


