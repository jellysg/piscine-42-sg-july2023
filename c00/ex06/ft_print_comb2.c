#include <unistd.h>

void	ft_putstr(char string[4])
{
	write (1, &string[0], 2);
	write (1, " ", 1);
	write (1, &string[2], 2);
}

void	ft_two_digits(char string[4])
{
	int first_pair;
	int second_pair;
	
	first_pair = (string[0] - '0') * 10 + (string[1] - '0');
	second_pair = (string[2] - '0') * 10 + (string[3] - '0');
	if (first_pair == 98 && second_pair == 99)
	{
		ft_putstr(string);
	}
	else if (first_pair < second_pair)
	{
		ft_putstr(string);
		write (1, ", ", 2);
	}
	return;
}

void	ft_print_comb2(void)
{
	int	counter;
	int	v;
	int	combination;
	char	string[4];
	
	counter = 0;
	while (counter <= 9899)
	{
		v = 3;
		combination = counter;
		while (v >= 0)
		{
			string[v] = (combination % 10) + '0';
			combination /= 10;
			v--;
		}
		ft_two_digits(string);
		counter++;
	}
}
/*
int main(void)
{
	ft_print_comb2();
}
*/
