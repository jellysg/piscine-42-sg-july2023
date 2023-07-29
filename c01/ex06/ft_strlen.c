void	ft_strlen(char *str)
{
	int length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
}
