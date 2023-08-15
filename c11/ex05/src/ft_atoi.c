#include "ft.h"

int	ft_atoi(char *str)
{
	int	nbr;

	nbr = 0;
	while (*str)
		nbr = nbr * 10 + *str++ - '0';
	return (nbr);
}
