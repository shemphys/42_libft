/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparedes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:41:36 by mparedes          #+#    #+#             */
/*   Updated: 2022/09/15 11:41:37 by mparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	
	i = ft_strlen(str);
	if (str[i] == (char)c)
		return (&((char *)str)[i]);
	while (i > 0)
	{
		i--;
		if (((char *)str)[i] == (char)c)
			return (&((char *)str)[i]);
	}
	return (NULL);
}
