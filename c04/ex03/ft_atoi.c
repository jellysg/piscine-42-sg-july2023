#include <unistd.h>

int		ft_atoi(char *str)
{
	int		sign;
	int		number;

	sign = 1;
	number = 0;
	while (*str)
	{
		if (!(*str == ' ' || *str == '+' || *str == '-' || (*str >= '0' && *str <= '9')))
			return (0);
		else if (*str == '-')
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

int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        printf("\nInteger Returned: %d\n", ft_atoi(argv[i]));
    }
    return 0;
}
*/
