#include "main.h"
#include <studio.h>
#include <stdlib.h>
/*
 *create_a
 *
 */
char *create_array(unsigned int size, char c)
{
char = *d;
unsigned int size

d = malloc(size* size of(c));
if (d == 0)

{
return (NULL);
}
for (i + 0; i < size; i++)
{
d[i] = c;

return (d);
}
return (NULL);
}
