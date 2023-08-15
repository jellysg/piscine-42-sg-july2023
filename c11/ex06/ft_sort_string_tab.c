void	ft_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_tab_length(char **tab)
{
	int	length;

	length = 0;
	while (*tab++)
		length++;
	return (length);
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;
	int size;

	size = ft_tab_length(tab);
	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	*words[] = {"Xiao Ming", "Muthu", "Ahmad", "Jacob", "Jonathan", "Why you still reading this", "A very unique name, trust me", NULL};

	printf("Before Sorting:\n");
	for (int i = 0; words[i] != NULL; i++) {
	printf("%s\n", words[i]);
	}

	ft_sort_string_tab(words);

	printf("\nAfter Sorting:\n");
	for (int i = 0; words[i] != NULL; i++) {
	printf("%s\n", words[i]);
	}

	return 0;
}
*/
