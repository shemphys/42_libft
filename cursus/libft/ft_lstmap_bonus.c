/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparedes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:39:59 by mparedes          #+#    #+#             */
/*   Updated: 2023/03/04 18:40:00 by mparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
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
			ft_lstclear(&n_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&n_lst, n_item);
		lst = lst->next;
	}
	return (n_lst);
}
