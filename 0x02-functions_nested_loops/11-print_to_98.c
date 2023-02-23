#include"main.h"
#include <stdio.h>

/**
 * print_to_98 - print n to 98 counts
 *           separated by comma, followed
 *           by space and number should be
 *           printed in order
 *
 * @n: input
*/

void print_to_98(int n)
{
	int webster;

	if (n > 98)
		for (webster = n; webster > 98; --webster)
			printf("%d ,", webster);
	else
		for (webster = n; webster < 98; ++webster)
			printf("%d, ", webster);
	printf("98\n");
}
