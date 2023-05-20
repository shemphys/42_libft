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
	if ((!dst || !src) && !dstsize)
		return (0);
	while (dst[i_dst] != '\0' && i_dst < dstsize)
		i_dst++;
	while (src[i_src] != '\0' && i_dst + i_src + 1 < dstsize)
	{
		dst[i_dst + i_src] = src[i_src];
		i_src++;
	}
	if (i_src != 0)
		dst[i_dst + i_src] = '\0';
	return (i_dst + srclen);
}
