#include "main.c"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int i, e;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (e = 0; e < 10; e++)
		{
			if (s[i] == a[e])
			{
				s[i] = b[e];
			}
		}
	}

	return (s);
}
