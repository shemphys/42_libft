#include "libft.h"
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	long aux;
	aux = n;
	if (aux < 0)
	{
		ft_putchar_fd('-', fd);
		aux = -aux; 
	}
	else
		aux = n;
	if (aux > 9)
	{
		ft_putnbr_fd(aux / 10, fd);
		aux %= 10;
	}
	ft_putchar_fd(aux + '0', fd);
}
