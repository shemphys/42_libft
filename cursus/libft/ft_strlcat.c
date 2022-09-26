/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparedes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:22:41 by mparedes          #+#    #+#             */
/*   Updated: 2022/09/15 10:22:43 by mparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i_src;
	size_t	i_dst;
	size_t	srclen;

	i_dst = 0;
	i_src = 0;
	srclen = ft_strlen(src);
	while (dst[i_dst] != '\0' && i_dst < dstsize)
		i_dst++;
	while (src[i_src] != '\0' && i_dst + i_src + 1 < dstsize)//¿Por qué no vale i_src < (dstsize - i_dst - 1)? el negativo de un size_t se pasa al máximo del positivo.
	{
		dst[i_dst + i_src] = src[i_src];
		i_src++;
	}
	if (i_src != 0)
		dst[i_dst + i_src] = '\0';
	return (i_dst + srclen);
}
/*
No puedo utilizar ft_strlen(dest), y debo utilizar un contador
porque la función podría encontrar un error en caso de dest no fuese
NULL terminated.
En cambio, SRC debe ser NULL-terminated, sino, es problema del usuario.
*/
/*size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	//if (dstsize <= dstlen)
	//	return (srclen + dstlen);
	while (src[i] != '\0' && i < (dstsize - dstlen - 1))
	{
		dst[i + dstlen] = src[i];
		i++;
	}
	if (i > 0)
		dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}*/
