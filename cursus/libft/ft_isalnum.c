/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparedes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:50:45 by mparedes          #+#    #+#             */
/*   Updated: 2022/09/13 12:50:46 by mparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 90) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}
/*
#include <ctype.h>
int	main(void)
{
	char a = 122;
	int x = isalnum(a);
	int y = ft_isalnum(a);
}*/