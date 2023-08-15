int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (i++ < length)
		if (f(*tab++))
			count++;
	return (count);
}
/*
#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

int check_over_3_strlen(char *str)
{
	if (ft_strlen(str) > 3)
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	*array1[] = {"a", "ab", "abc", "abcd", "abcde", NULL};
	int	length1 = (sizeof(array1) / sizeof(array1[0])) - 1;
	printf("\nExample A:\n");
	for (int i = 0; array1[i] != NULL; i++)
		printf("%s\n", array1[i]);
	printf("Returns: %d\n", ft_count_if(array1, length1, check_over_3_strlen));

	char	*array2[] = {"a", "ab", "abc", "ab", "a", NULL};
	int	length2 = (sizeof(array2) / sizeof(array2[0])) - 1;
	printf("\nExample B:\n");
	for (int i = 0; array2[i] != NULL; i++)
		printf("%s\n", array2[i]);
	printf("Returns: %d\n\n", ft_count_if(array2, length2, check_over_3_strlen));

    return (0);
}
*/
