#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	*buffer;

	if (min >= max)
		return (0);
	range = (int*)malloc(sizeof(min) * (max - min));
	if (!range)
		return (0);
	buffer = range;
	while (min < max)
		*buffer++ = min++;
	return (range);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (min >= max)
		return (0);
	if (!*range)
		return (-1);
	return (max - min);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*result;
	int	min = 5;
	int	max = 12;
	
	printf("Min: %d, Max: %d\n", min, max);
	int	size = ft_ultimate_range(&result, min, max);
	printf("Generated array: ");
	for (int i = 0; i < size; i++)
		printf("%d ", result[i]);
	printf("\n");
	free(result);
	return 0;
}
*/
