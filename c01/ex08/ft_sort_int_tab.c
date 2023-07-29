void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int buffer;

	j = 1;
	while (j <= size)
	{
		i = 0;
		while (i <= size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				buffer = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = buffer;
			}
			i++;
		}
		j++;
	}
}
