/*
char	*ft_strdup(char *src)
{
	char	*str;
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	str = (char *) malloc(i + 1);
	while (j < i)
	{
		str[j] = src[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
*/
char	*ft_strdup(char *src)
{
	char	*str;
	int	count;
	int	buildcount;

	count = 0;
	buildcount = 0;
	while (src[count] != '\0')
		count++;
	str = (char*)malloc(count + 1);
	while (buildcount < count)
	{
		str[buildcount] = src[buildcount];
		buildcount++;
	}
	str[buildcount] = '\0';
	return (str);
}


































