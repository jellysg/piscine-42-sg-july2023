int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (i++ < length - 1)
	{
		if (f(*tab, *(tab + 1)) <= 0)
			count++;
		tab++;
	}
	return (count == length - 1);
}
/*
#include <stdio.h>

int compare(int a, int b) {
    if (a < b) return -1;
    if (a == b) return 0;
    return 1;
}

int	main(void)
{
	int	array1[] = {1, 2, 3, 4, 5};
	int	length1 = sizeof(array1) / sizeof(array1[0]);
	printf("Array A: Returns %d\n", ft_is_sort(array1, length1, compare));
	for(int i = 0; i < length1 ; i++)
		printf("%d, ", array1[i]);
	printf("\n\n");

	int array2[] = {5, 3, 4, 2, 1};
	int length2 = sizeof(array2) / sizeof(array2[0]);
	printf("Array B: Returns %d\n", ft_is_sort(array2, length2, compare));
	for(int i = 0; i < length1 ; i++)
		printf("%d, ", array2[i]);
	printf("\n\n");

	int array3[] = {1, 1, 3, 3, 5};
	int length3 = sizeof(array3) / sizeof(array3[0]);
	printf("Array C: Returns %d\n", ft_is_sort(array3, length3, compare));
	for(int i = 0; i < length1 ; i++)
		printf("%d, ", array3[i]);
	printf("\n\n");

    return (0);
}
*/
