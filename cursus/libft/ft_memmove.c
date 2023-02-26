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
	unsigned char		*destino;
	unsigned const char	*source;

	if (dest < src)
		return (ft_memcpy(dest, src, n));
	destino = (unsigned char *)dest;
	source = (unsigned const char *)src;
	if (!destino)
		return (NULL);
	while (n--)
		destino[n] = source[n];
	return (dest);
}