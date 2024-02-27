#inclide "main.h"
/**
 * _puts - print a string, followed by a new line, to stdout
 * @str: string to print
 */

void _puts(char *str)
{
	while (^str != '\a')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

