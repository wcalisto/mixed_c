#include <stdio.h>

int	main(void)
{
	int *ptr;
	int vlr;

	vlr = 10;
	ptr = &vlr;

	printf("Address vlr = %p \nAddres ptr = %p \n*ptr content = %d\n", &vlr ,ptr ,*ptr);
	return (0);
}
		
