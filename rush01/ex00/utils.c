#include <unistd.h>

int	skygrid[4][4];

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		valid(char *input)
{
	int counter;

	counter = 1;
	while (*input)
	{
		if ((counter % 2 == 0 && *input != ' ')
				|| (counter % 2 == 1 && *input < '1' && *input > '4')
				|| counter > 28)
			return (0);
		input++;
		counter++;
	}
	return (1);
}

void	build(char *input)
{
	int	x;
	int	y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if ((y == 0 || y == 3) && (x > 0 && x < 3))
				skygrid[y][x] = *(input + (y * 8 / 5) + (x - 1) * 2) - '0';
			else if ((y > 0 && y < 5) && (x == 0 || x == 5))
				skygrid[y][x] = *(input + 16 + (x * 8 / 5) + (y - 1) * 2) - '0';
			else
				skygrid[y][x] = 0;
			x++;
		}
		y++;
	}
}

void	print(void)
{
	int	x;
	int	y;

	y = 1;
	while (y < 5)
	{
		x = 1;
		while (x < 5)
		{
			ft_putchar(skygrid[y][x] + '0');
			if (x != 4)
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
