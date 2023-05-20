/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparedes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:38:54 by mparedes          #+#    #+#             */
/*   Updated: 2023/03/04 18:38:56 by mparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (!lst)
	{
		f(lst);
		lst = lst->next;
	}
}
/*
	Should I use some aux variable?

	I'm applying function "f" to all the nodes of a list.
*/
