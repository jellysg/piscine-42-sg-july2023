int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	int number = 5;
	int power = 3;

	printf("%d^%d (%d to the power of %d):\n", number, power, number, power);
	printf("%d\n", ft_recursive_power(number, power));
}
*/
