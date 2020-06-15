#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_alphabet_recursive(int ar)
{
	ft_putchar(ar);
	if ( ar < 91)
		ft_alphabet_recursive(ar + 1);
}

int		main(void)
{
	int i;

	i = 65;
	ft_alphabet_recursive(i);
	return (0);
}
