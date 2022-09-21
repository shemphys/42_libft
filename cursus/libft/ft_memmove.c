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

void	*ft_memmove(void *to, const void *from, size_t n)
{
	size_t	i;

	if (to > from)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)to)[i] = ((unsigned char *) from);
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (i >= 0)
		{
			((unsigned char *)to)[i] = ((unsigned char *)from)[i];
			i--;
		}
	}
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