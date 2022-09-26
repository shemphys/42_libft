/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparedes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:30:30 by mparedes          #+#    #+#             */
/*   Updated: 2022/09/15 11:30:31 by mparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			return (&((char *)str)[i]);//aquí devolvemos la primera coincidencia
		i++;
	}
	if (ch == '\0')
		return ((char *)(str + i));
	return (NULL);//esta posición lleva al '\0'
}
