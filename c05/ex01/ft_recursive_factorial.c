int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	int	f = 10;
	printf("%d! (%d x %d x %d x ..):\n", f, f, f-1, f-2);
	printf("%d\n", ft_recursive_factorial(f));
}
*/
