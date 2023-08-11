#include <stdio.h>

int	num_check(char *arg) //check to return true if arg are only numbers
{
	int	i;

	i = 0;
	while (arg[i] != '\0')
	{
		if (arg[i] >= '0' && arg[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d", num_check(argv[1]));
}
*/
