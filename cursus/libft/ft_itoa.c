#include "libft.h"

size_t	ft_abs(long n)
{
	if (n < 0)
		return (-n);
	return (n);
}

size_t	ft_numbersize(long n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*x;
	size_t	aux;
	long	i;

	i = ft_numbersize(n);
	aux = ft_abs((long)n);
	x = (char *)malloc(sizeof(char) * (i + 1));
	if (!x)
		return (NULL);
	x[i--] = '\0';
	while (i >= 0)
	{
		if (i == 0 && n < 0)
			x[i--] = '-';
		else
		{
			x[i--] = (aux % 10) + '0';
			aux /= 10;
		}
	}
	return (x);
}
