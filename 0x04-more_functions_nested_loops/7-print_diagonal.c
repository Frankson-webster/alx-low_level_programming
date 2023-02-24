#include "main.h"

/**
 * print_diagonal - printing lines diagonal
 * @n: input variable, how many times to print
 *
 * Return: void
 */


void print_diagonal(int n)
{
	int o, p;

	if (n <= 0)
		_putchar('\n');
	for (o = 0; o < n; o++)
	{
		for (p = 0; p < o; p++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
