extern int	skygrid[4][4];
int		skysolutions;

void	ft_putstr(char *str);
void	build(char *input);
void	print(void);
int	valid(char *input);
int	possible(int x, int y, int n);
void	solve(void);

void	test(int x, int y)
{
	int	n;

	n = 1;
	while (n < 3)
	{
		if (possible(x, y, n))
		{
			skygrid[y][x] = n;
			solve();
			skygrid[y][x] = 0;
		}
		n++;
	}
}

void	solve(void)
{
	int	x;
	int	y;

	if (skysolutions)
		return ;
	y = 1;
	while (y < 3)
	{
		x = 1;
		while (x < 3)
		{
			if (!skygrid[y][x])
			{
				test(x, y);
				return ;
			}
			x++;
		}
		y++;
	}
	skysolutions++;
	print();
}

int		main(int argc, char *argv[])
{
	skysolutions = 0;
	if (argc != 2 || !valid(argv[1]))
		ft_putstr("Error\n");
	else
	{
		build(argv[1]);
		solve();
		if (!skysolutions)
			ft_putstr("Error\n");
	}
	return (0);
}
