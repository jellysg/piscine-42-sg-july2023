#include "ft.h"

int	ft_find_operator(char c, char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if (c == *str++)
			return (i);
		i++;
	}
	return (-1);
}
