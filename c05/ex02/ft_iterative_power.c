int	ft_iterative_power(int nb, int power)
{
	int	buffer;

	buffer = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power > 1)
	{
		nb = nb * buffer;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int number = 5;
	int power = 3;

	printf("%d^%d (%d to the power of %d):\n", number, power, number, power);
	printf("%d\n", ft_iterative_power(number, power));
}
*/
