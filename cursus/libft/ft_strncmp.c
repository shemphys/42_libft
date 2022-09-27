/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparedes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:21:09 by mparedes          #+#    #+#             */
/*   Updated: 2022/09/15 15:21:10 by mparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)//i menor que n y no igual porque la posición 0 la contamos, melón.
	{// tiene que ser || para que pueda hacer la resta en la posición 0 de una de las dos con la otra.
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);//si no lo casteas como unsigned no funcionará con caracteres no ASCII
		i++;
	}
	return (0);
}
