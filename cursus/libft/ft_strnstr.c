/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparedes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:02:17 by mparedes          #+#    #+#             */
/*   Updated: 2022/09/19 16:02:20 by mparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;//contador para haystack
	size_t	j;//contador para needle

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
				j++;
			else
				break;
		}
		if (j == ft_strlen(needle))//quiere decir que ha iterado hasta el '\0' por lo tanto no tengo que restar 1 al ft_strlen
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}