#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	int i = 0;
	int j = 1;
	int k = 2;

	while (i <= 7)
	{
		while (j <= 8)
		{
			while (k <= 9)
			{
				ft_putchar(i + '0');
				ft_putchar(j + '0');
				ft_putchar(k + '0');

				if (!(i == 7 && j == 8 && k == 9))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}

				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
		k = j + 1;
	}
}
