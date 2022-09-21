/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparedes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:23:39 by mparedes          #+#    #+#             */
/*   Updated: 2022/09/15 11:23:40 by mparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)//solo 1 char a su mayus
{
	if (c >= 97 && c <= 122)//solo las minus
		c -= 32;//y las pasamos a mayus
	return (c);
}
