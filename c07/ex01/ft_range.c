int	*ft_range(int min, int max)
{
	if (max && max > min)
	{
		int	*counter;
		int	*range;

		range = (int*)malloc(sizeof(int) * (max - min));
		counter = range;
		while (min < max)
			*counter++ = min++;
		return (range);
	}
	else
		return (0);
}
/*
#include <stdio.h>

int main(void)
{
	int	min = -10;
	int	max = 10;
	int *result = ft_range(min, max);
	if (result == NULL) {
		printf("Invalid input range\n");
	return 1;
	}
	printf("Min: %d,\nMax: %d,\n", min, max);
	printf("Generated array: ");
	for (int i = 0; i < max - min; i++)
		printf("%d ", result[i]);
	printf("\n");

    free(result);

    return 0;
}
*/
