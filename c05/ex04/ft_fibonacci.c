int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1 || index == 2)
		return (1);
	else
		return (ft_fibonacci(index-1) + ft_fibonacci(index-2));
}
/*
#include <stdio.h>

int	main(void)
{
	int	fib = 22;
	
	printf ("\nFibonacci Sequence for reference:\n");
	printf ("0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, ...\n\n");
	printf ("Chosen N: %d\n", fib);
	printf ("Returns: %d\n", ft_fibonacci(fib));
}
*/
