int	ft_any(char **tab, int (*f)(char*))
{
	while (*tab)
	{
		if (f(*tab++))
			return (1);
	}
	return (0);
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
	printf("\nSuccess Example:\n");
	for (int i = 0; array1[i] != NULL; i++)
		printf("%s\n", array1[i]);
	printf("Returns: %d\n", ft_any(array1, check_over_3_strlen));

	char	*array2[] = {"a", "ab", "abc", "ab", "a", NULL};
	printf("\nFailure Example:\n");
	for (int i = 0; array2[i] != NULL; i++)
		printf("%s\n", array2[i]);
	printf("Returns: %d\n\n", ft_any(array2, check_over_3_strlen));

    return (0);
}
*/
