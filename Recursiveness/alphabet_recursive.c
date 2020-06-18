#include <unistd.h>

void	putchar(char c)
{
	write (1, &c, 1);
}

void	alphabet_recursive(int ar)
{
	putchar(ar);
	if ( ar < 91)
		alphabet_recursibe(ar + 1);
}

int		main(void)
{
	alphabet_recursive(64);
	return (0);
}
