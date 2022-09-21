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
	size_t	i = ft_strlen(str) - 1;//el -1 nos da la posición del fin de cadena.

	while (i >= 0)
	{
		if (((char *)str)[i] == c)
			return (((char *)str)[i]);
		i--;
	}
	return (NULL);//devuelve nulo.
}
