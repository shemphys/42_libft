/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparedes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:40:21 by mparedes          #+#    #+#             */
/*   Updated: 2022/09/14 10:40:22 by mparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t n)
{
	size_t	i;

	i = 0;
	if (to == NULL && from == NULL)
		return (NULL);
	while (n > i)
	{
		((unsigned char *)to)[i] = ((unsigned char *)from)[i];
		i++;
	}
	return (to);
}
