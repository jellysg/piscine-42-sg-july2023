void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = 0;
	while (i++ < length)
		f(*tab++);
}
/*
#include <stdio.h>

void print_num(int x) {
    printf("%d\n", x);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);

    ft_foreach(arr, length, print_num);
    return 0;
}
*/
