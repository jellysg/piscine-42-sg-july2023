int ft_strlen(char *str)
{
	int length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}
