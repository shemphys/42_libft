#include "libft.h"

long	ft_abs(long n)
{
	if (n < 0)
		return (-n);
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	long  aux;

	aux = ft_abs(n);
	if (n < 0)
		write(fd, "-", 1);
	while (aux >= 0)
	{
		ft_putchar_fd((aux%10 - 48 + '0'), fd);
		aux /= 10;
	}
}