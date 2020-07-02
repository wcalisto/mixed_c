#include <unistd.h>

void	ft_is_negative(int n)
{
	char x; 
	x = ( n >= 0 ) ? 'P' : 'N';
	write (1 ,&x ,1 );
}

int		main(void)
{
	ft_is_negative(9);
	return (0);
}
