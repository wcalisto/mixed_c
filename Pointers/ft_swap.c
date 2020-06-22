#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		main(void)
{
	int a;
	int b;

	a = 2;
	b = 4;

	ft_putchar(a+48);
	ft_putchar(b+48);
	ft_putchar('\n');
	ft_swap(&a, &b);
	ft_putchar(a+48);
	ft_putchar(b+48);
	ft_putchar('\n');

	return (0);
}
