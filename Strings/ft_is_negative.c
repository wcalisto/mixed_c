#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_is_negative(int n)
{
	char x; 
	x = ( n >= 0 ) ? 'P' : 'N';
	ft_putchar(x);
}

int		main(void)
{
	ft_is_negative(-9);
	ft_putchar('\n');
	return (0);
}
