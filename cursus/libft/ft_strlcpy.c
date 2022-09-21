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
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	if (src[i] != '\0' && dst[i] != '\0' && dstsize != 0)//checking 1st positions and dstsize
	{
		srclen = ft_strlen(src);
		i = 0;
		while (i > srclen && i < dstsize - 1)//pa que no sobrepase dest ni busque más allá del tamaño de src
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	src[] = "1234567890";
	char	dst[] = "qwertyuiop";

	size_t x = ft_strlcpy(dst, src, 3);
}*/