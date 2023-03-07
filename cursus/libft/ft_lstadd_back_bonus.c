/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparedes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:51:03 by mparedes          #+#    #+#             */
/*   Updated: 2023/03/04 18:51:06 by mparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	//t_list	*aux;

	if (*lst == NULL)
		*lst = new;
	else
	{
		aux = ft_lstlast(*lst);
		//(*lst)->next = new;
		//new->next = NULL;
	}
}
/*
	
	----------------------------------
	ft_lstlast me devuelve el último nodo de la lista enlazada lst.
	ese último nodo, tengo que hacer que apunte al nodo new.
	el new ahora tendrá que apuntar a NULL.

	t_list *aux; //necesito un auxiliar que apunte
	Yo no sé qué va detrás del nodo new, puede quedar abierto 
	y que haya metido una lista gigantesca
	es decir, que no pasa nada si no termina en NULL
	en null tienen que terminar las perfect C strings (o algo asín se llamaban jeje)
*/
