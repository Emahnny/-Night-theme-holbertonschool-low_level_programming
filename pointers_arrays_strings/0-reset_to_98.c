#include <stdio.h>

/*
 *main - change value of 'n to 98
 *
 *Return: 0
 *
 **/

int main(void)
{
int n;
n = 402;
int *miparametro = &n;
*miparametro = 98;
return (0);
}

