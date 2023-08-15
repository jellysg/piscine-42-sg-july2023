#include <unistd.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	number;

	sign = 1;
	number = 0;
	while (*str)
	{
		if (*str == '-')
			sign *= -1;
		else if (*str >= '0' && *str <= '9')
		{
			while (*str >= '0' && *str <= '9')
			{
				number = 10 * number + *str - '0';
				str++;
			}
			break ;
		}
		str++;
	}
	return (sign * number);
}
/*
#include <stdio.h>

int ft_atoi(char *str);

int main(void)
{
    char str[50];
    int result;

    printf("Enter a string: ");
    scanf("%49s", str);

    result = ft_atoi(str);
    printf("Converted integer: %d\n", result);

    return 0;
}
*/
