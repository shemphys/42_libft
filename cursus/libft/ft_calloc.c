/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparedes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:00:07 by mparedes          #+#    #+#             */
/*   Updated: 2022/09/19 20:00:08 by mparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	result = malloc(nmemb * size);
	if (!result)//tiene 0 posiciones (nmemb=0 || size=0) pues devuelvo un puntero a NULL
		return (NULL);
	else
	{
		ft_bzero(result, (nmemb * size));
		return (result);
	}
}