extern int	skygrid[4][4];

int	from_left(int blocks[4], int n)
{
	int	counter;
	int	views;
	int	tallest;
	int	solution;

	views = 1;
	solution = blocks[0];
	tallest = blocks[1];
	counter = 2;
	while (counter < 4)
	{
		if (blocks[counter] > tallest)
		{
			views++;
			tallest = blocks[counter];
		}
		counter++;
	}
	if (n > tallest)
		views++;
	return (views == solution);
}


int	from_right(int blocks[4], int n)
{
	int	counter;
	int	views;
	int	tallest;
	int	solution;

	views = 1;
	solution = blocks[3];
	tallest = n;
	counter = 2;
	while (counter < 4)
	{
		if (blocks[4 - counter] > tallest)
		{
			views++;
			tallest = blocks[4 - counter];
		}
		counter++;
	}
	return (views == solution);
}

int	from_top (int blocks[4], int n)
{
	int	counter;
	int	views;
	int	tallest;
	int	solution;

	views = 1;
	solution = blocks[0];
	tallest = blocks[1];
	counter = 2;
	while (counter < 4)
	{
		if (blocks[counter] > tallest)
		{
			views++;
			tallest = blocks[counter];
		}
		counter++;
	}
	if (n > tallest)
		views++;
	return (views == solution);
}

int	from_bottom (int blocks[4], int n)
{
	int	counter;
	int	views;
	int	tallest;
	int	solution;

	views = 1;
	solution = blocks[0];
	tallest = blocks[1];
	counter = 2;
	while (counter < 4)
	{
		if (blocks[counter] > tallest)
		{
			views++;
			tallest = blocks[counter];
		}
		counter++;
	}
	if (n > tallest)
		views++;
	return (views == solution);
}

int	possible(int x, int y, int n)
{
	int	i;
	int	j;
	int	blocks[4];

	i = 1;
	while (i < 4)
	{
		if (skygrid[y][i] == n || skygrid[i][x] == n) 
			return (0);
		if (y == i && x == 3 && (!from_left(skygrid[i], n) || !from_right(skygrid[i], n))) 
			return (0);
		if (x == i && y == 3)
		{
			j = 0;
			while (j < 4)
			{
				blocks[j] = skygrid[j][i];
				j++;
			}
			if (!from_top(blocks, n) || !from_bottom(blocks, n)) 
				return (0);
		}
		i++;
	}
	return (1);
}



