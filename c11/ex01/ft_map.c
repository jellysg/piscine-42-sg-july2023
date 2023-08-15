#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result;
	int	i;

	result = (int*)malloc(sizeof(*tab) * length);
	i = 0;
	while (i++ < length)
		*result++ = f(*tab++);
	return (result - length);
}
/*
#include <stdio.h>

int	square(int x)
{
	return (x * x);
}

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};
	int	length = sizeof(arr) / sizeof(arr[0]);
	int	*squaredArr = ft_map(arr, length, square);

	printf("Original array: ");
	for (int i = 0; i < length; i++)
		printf("%d ", arr[i]);
	printf("\n");

	printf("Squared array:  ");
	for (int i = 0; i < length; i++)
		printf("%d ", squaredArr[i]);
	printf("\n");

	free(squaredArr);
	return (0);
}
*/
