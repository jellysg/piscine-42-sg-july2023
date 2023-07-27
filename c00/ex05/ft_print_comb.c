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
				ft_putchar(i + '0'); //found out you can just use int + '0' to make it become char (to putchar)
				ft_putchar(j + '0');
				ft_putchar(k + '0');

				if (!(i == 7 && j == 8 && k == 9)) //is this allowed?
				{
					ft_putchar(',');
					ft_putchar(' ');
				}

				k++;
			}
			j++;
			k = j + 1; //this is to make sure it cycles properly
		}
		i++;
		j = i + 1;
		k = j + 1;
	}
}

int main(void)
{
	ft_print_comb();
	return 0;
}

