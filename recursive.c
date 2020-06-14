#include <stdio.h>

int		recursive(int r)
{
	if ( r == 0)
		return (1);
	else
		return(r * recursive(r-1));
}

int		main(void)
{
		int r;

		r = 3;
		printf("Fatorial de %d = %d \n", r, recursive(r));
		return(0);
	
}
