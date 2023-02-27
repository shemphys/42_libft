#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;
	i = 0;
	while (lst != NULL)
	{
		lst = lst.next;//probablemente haiga que poner una flecha en vez de un punto pero asín checkeo hehe
		i++;
	}
	return (i);
}