#include <unistd.h>

void ft_print_numbers(void)
{
	int i;
	i = 48;
	
	while(i < 58)
	{
		write(1, &i, 1);
		++i;
	}
}
