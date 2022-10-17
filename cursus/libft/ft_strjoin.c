/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparedes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:12:52 by mparedes          #+#    #+#             */
/*   Updated: 2022/10/17 18:12:55 by mparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*destino;

	j = 0;
	i = 0;//aquí puedo tener el problema si me dan un nulo.
	destino = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);//Why that +1 is needed??
	if (!destino)
		return (NULL);
	//now we fill destino
	while (s1[i] != '\0')
	{
		destino[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		destino[i + j] = s2[j];
		j++;
	}
	destino[i + j] = '\0';
	return (destino);
}
