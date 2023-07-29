void	ft_ultimate_div_mod(int *a, int *b)
{
	int divide;
	int modulo;

	divide = *a / *b;
	modulo = *a % *b;
	*a = divide;
	*b = modulo;
}
