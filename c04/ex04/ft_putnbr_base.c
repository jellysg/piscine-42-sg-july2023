#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	dec_to_base(int nbr, char *base, int n)
{
	if (nbr == -2147483648)
	{
		write(1, "10000000000000000000000000000000", 33);
		return ;
	}
	else if ((nbr > n - 1) && nbr != -2147483648)
		dec_to_base(nbr / n, base, n);
	ft_putchar(base[nbr % n]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	*unique;
	int		numcount;

	numcount = 0;
	while (*base != '\0' && *base != '+' && *base != '-')
	{
		unique = base;
		while (*unique++)
		{
			if (*unique == *base)
				return ;
		}
		numcount++;
		base++;
	}
	if (numcount > 1 && *base != '+' && *base != '-')
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		dec_to_base(nbr, base - numcount, numcount);
	}
}
/*
int main(void)
{
    int number = 1234;
    char *base = "p";

    ft_putnbr_base(number, base);
    ft_putchar('\n');

    return (0);
}
*/
