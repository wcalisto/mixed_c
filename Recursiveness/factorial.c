#include <stdio.h>

int		factorial(int f)
{
	if ( f == 0)
		return (1);
	else
		return(f * factorial(f - 1));
}

int		main(void)
{
		int f;

		f = 3;
		printf("Fatorial de %d = %d \n", f, factorial(f));
		return(0);
	
}
