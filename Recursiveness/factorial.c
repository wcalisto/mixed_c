#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	factorial(int f)
{
	int x;

	ft_putchar(48+f);
	ft_putchar('.');
	x = f - 1;
	if (x >= 0)
	{
		factorial(f * x);
	}
}

int		main(void)
{
	factorial(3);
	return (0);
}


