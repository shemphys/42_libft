/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparedes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:00:07 by mparedes          #+#    #+#             */
/*   Updated: 2022/09/19 20:00:08 by mparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	max_value;

	max_value = -1;
	if (size > 0 && count > max_value / size)
		return (0);
	result = malloc(count * size);
	if (result)
		ft_bzero(result, (count * size));
	return (result);
}
