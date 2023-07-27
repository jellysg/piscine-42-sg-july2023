#include <unistd.h>

void ft_print_alphabet(void)
{
	char c;

	c = 97;
	while (c < 123)
	{
		write(1, &c, 1);
		++c;
	}
}
