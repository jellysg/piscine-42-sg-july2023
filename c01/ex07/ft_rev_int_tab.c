void	ft_rev_int_tab(int *tab, int size)
{
	int *first;
	int *last;
	int temp;

	first = tab;
	last = tab + size - 1;
	while (first < last)
	{
		temp = *first;
		*first = *last;
		*last = temp;
		first++;
		last--;
	}
}
