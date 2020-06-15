#include <unistd.h>

void	putchar(char c)
{
	write (1, &c, 1);
}

int		alphabet_recursive(int ar)
{
	int i;

	i = 40;
	putchar(i + alphabet_recursive +1);
}

int		main(void)
{
	alphabet_recursive();
	return (0);
}
