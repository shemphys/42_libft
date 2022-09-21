/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparedes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:11:56 by mparedes          #+#    #+#             */
/*   Updated: 2022/09/15 16:11:57 by mparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c) 
			return ((unsigned char *)&str[i]);//no puedo modificar el valor de s como tal porque es un const void
		i++;								//tampoco puedo return it, cuz void* functions don't return const nor volatile.
	}
	return (0);
}
