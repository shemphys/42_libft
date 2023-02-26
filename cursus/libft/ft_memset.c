/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparedes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:33:42 by mparedes          #+#    #+#             */
/*   Updated: 2022/09/13 15:33:44 by mparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *to, int ch, unsigned int n)
{
	size_t				i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)to)[i] = ch;
		i++;
	}
	return (to);
}
