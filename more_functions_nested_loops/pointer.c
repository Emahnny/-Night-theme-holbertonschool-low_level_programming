#include <stdio.h>

void main(void)
{
	int a = 1, b = 2;
	int *p;

	printf("%d %p\n", a, &a);
	printf("%d %p\n", b, &b);
	printf("%p\n", p);

	p = &a;

	printf("%p\n", p);
	p = &b;
	printf("%d %d\n", b, *p); 








}
