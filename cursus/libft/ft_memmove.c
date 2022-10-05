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
/*
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
		i = n;//no puedo hacer comparaciones en las que un size_t sea < 0.
		while (i > 0)
		{
			i--;//lo resto antes porque tengo que usar 0
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	return ((void *)dest);
}*/
/*
#include <string.h>
int	main(void)
{
	char from[] = "12";
	char to[100] = "xxxxx";
	to[30] = 'a';
	memcpy(to, from, 60);
}*/
/*void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*destino;
	unsigned const char	*source;

	if (dest < src)//no comprendo este if xD porque está comparando 2 posiciones
		return (ft_memcpy(dest, src, n));
	destino = (unsigned char *)dest;
	source = (unsigned const char *)src;
	while (n--)//no cogemos la última posición por ser el '\0'
		destino[n] = source[n];
	return (dest);
}*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*destino;
	unsigned const char	*source;

	if (dest < src)//no comprendo este if xD porque está comparando 2 posiciones
		return (ft_memcpy(dest, src, n));
	destino = (unsigned char *)dest;
	source = (unsigned const char *)src;
	if (!destino)
		return (NULL);
	while (n--)//no cogemos la última posición por ser el '\0'
		destino[n] = source[n];
	return (dest);
}