#include <stdio.h>

int		factorial(int f)
{
	if ( f == 0)
	{
		return (1);
	}
	else
	{
		return(f * factorial(f - 1));
	}
}

int		main(int argc, char **argv)
{
		(void) argc;
		
		int i = argv[1] - '0';
		printf("Fatorial de %d = %d \n", argv[1], factorial(i));
}
