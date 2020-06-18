#include <stdio.h>

int		factorial(int f)
{
	if ( f >= 0)
		return(f * factorial(f - 1));
}

int		main(int argc, char **argv)
{
		(void) argc;

		char *c;
		int *i;

		c = argv[1];

		i = c - '0';
		printf("Fatorial de %d = %d \n", c, factorial(i));
}
