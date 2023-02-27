#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	aux;

	if (*lst == NULL)
		return ;
	while (*lst != NULL)
	{
		aux = *lst->next;
		ft_lstdelone(*lst);
		*lst = aux;
	}
	*lst = NULL;
}