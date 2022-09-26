/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparedes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:22:51 by mparedes          #+#    #+#             */
/*   Updated: 2022/09/14 11:22:52 by mparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* expecting perfect C strings: always NULL terminated. */
/*size_t	ft_strlcpy(char *dst, const char * restrict src, size_t dstsize)
{//restrict means that src is the only pointer pointing to that memory.
	size_t	i;//además, un T * restric p solo puede iterarse usando src++, no con i.
	size_t	srclen;

	i = 0;
	if (src + i != '\0' && dst[i] != '\0' && dstsize != 0)//checking 1st positions and dstsize
	{
		srclen = ft_strlen(src);
		i = 0;
		while (i < srclen && i < dstsize - 1)//pa que no sobrepase dest ni busque más allá del tamaño de src
		{
			dst[i] = src[i];//por qué aquí no puedo usar la forma src + i???
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = ft_strlen(src);
	if (dstsize == 0)
	{
		return (x);
	}
	while (src[i] != '\0' && i < (dstsize -1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (x);
}