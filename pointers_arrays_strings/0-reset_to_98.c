#include <stdio.h>

/**/

int main(void)
{
int n;
n = 402;

int *miparametro = &n;
*miparametro = 98;

return 0;
}

