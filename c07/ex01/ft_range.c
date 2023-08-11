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
