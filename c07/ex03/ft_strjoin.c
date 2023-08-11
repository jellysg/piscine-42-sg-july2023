#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}


long long	ft_strlen(char *str)
{
	long long	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

char	*empty_string(void)
{
	char	*str;

	str = (char*)malloc(sizeof(*str));
	*str = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	long long	total;
	char	*result;
	char	*combine;
	int	i;

	if (!size)
		return (empty_string());
	total = 0;
	i = 0;
	while (i < size)
		total += ft_strlen(strs[i++]);
	result = (char*)malloc(total + ft_strlen(sep) * (size - 1) + 1);
	combine = ft_strcat(result, strs[0]);
	i = 1;
	while (i < size)
	{
		combine = ft_strcat(combine, sep);
		combine = ft_strcat(combine, strs[i++]);
	}
	*combine = '\0';
	return (result);
}
