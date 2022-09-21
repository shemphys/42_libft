/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparedes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:46:56 by mparedes          #+#    #+#             */
/*   Updated: 2022/09/14 10:46:58 by mparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest > src)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;//no puedo hacer comparaciones en las que un size_t sea menor que 0.
		while (i > 0)
		{
			i--;//lo resto antes porque tengo que usar 0
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	return ((void *)dest);
}
/*
#include <string.h>
int	main(void)
{
	char from[] = "12";
	char to[100] = "xxxxx";
	to[30] = 'a';
	memcpy(to, from, 60);
}*/