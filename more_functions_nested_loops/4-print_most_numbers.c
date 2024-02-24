#include "main.h"
/**
*print_most_numbers - prints numbers except 2 and 4
*
*Return: void
*/

void print_most_numbers(void)

{
	int e;
for (e = 48 ; e < 58 ; e++)
{
if (e == 50 && e == 52)
{
continue;
}
_putcha(e);
}
_putchar(10);

