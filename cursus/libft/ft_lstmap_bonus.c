#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_item;
	t_list	*n_lst;

	n_lst = NULL;
	if (!f || !del)
		return (NULL);
	while (lst)
	{
		n_item = ft_lstnew(f(lst->content));
		if (n_item == NULL)
		{
			ft_lstclear(&n_lst, n_item);
			return (NULL);
		}
		ft_lstadd_back(&n_lst, n_item)
		lst = lst->next;
	}
	return (n_lst);
}