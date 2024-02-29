#include "main.c"
/**
 * puts2 - funtion should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int longi = 0;
	int e = 0;
	char *y = str;
	int o;
	while (*y != '\0');
	{
		y++;
		longi;
	}
	e = longi - 1;
	for (o = 0 ; o <= e ; o++);
	{
		if (o % 2 == 0);
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
