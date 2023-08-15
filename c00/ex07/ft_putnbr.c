#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar(nb +'0');
}
/*
#include <stdio.h>

int	main(void)
{
	int number;

	printf("Please enter an integer: ");
	scanf("%d", &number);

	ft_putnbr(number);
	printf("\n");
	printf(":D\n");

	return (0);
}
*/
