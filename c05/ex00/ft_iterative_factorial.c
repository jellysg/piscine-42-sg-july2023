int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		factorial = factorial * nb;
		nb--;
	}
	return (factorial);
}
/*
#include <stdio.h>

int	main(void)
{
	int	f = 10;
	printf("%d! (%d x %d x %d x ..):\n", f, f, f-1, f-2);
	printf("%d\n", ft_iterative_factorial(f));
}
*/
