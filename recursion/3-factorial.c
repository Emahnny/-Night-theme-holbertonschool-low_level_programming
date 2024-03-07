include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to find the factorial of.
 *
 * Return: If n > 0 - the factorial of n.
 *         If n < 0 - 1 to indicate an error.
 */
int factorial(int n)
{
    if (n < 0)
    {
        // No se puede calcular el factorial de un número negativo
        return -1;
    }
    else if (n == 0 || n == 1)
    {
        // El factorial de 0 y 1 es 1
        return 1;
    }
    else
    {
        // Calcula el factorial recurriendo a la función factorial
        return n * factorial(n - 1);
    }
}
