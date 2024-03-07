#include <stdio.h>
#include "main.h"

/**
 * main - Entry point to return an int
 * @e: argument index
 * Description: Printing passed number of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
for (int e = 0; e < argc; e++);

printf("Passed arguments: %d\n", argc);

return (0);
}
