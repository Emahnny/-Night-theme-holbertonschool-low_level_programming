#include "main.h"

/*
*swap_int - swap values of two integers
 *@a: integer to swap
 *@b: integer to sap
 **/

void swap_int(int *a, int *b)

{
	int e;

	 e = *a;
	*a = *b;
	*b = e;
}
