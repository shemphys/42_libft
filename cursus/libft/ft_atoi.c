/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparedes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:22:37 by mparedes          #+#    #+#             */
/*   Updated: 2022/09/19 16:22:38 by mparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	i;
	int			res;
	int			menoss;

	i = 0;
	menoss = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		menoss = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (res * menoss);
}
/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a[] = "-999999999999999999";//aquí falla mi función xd
	char b[] = "9223372036854775807";
	int y = ft_atoi(b);
	int x = atoi(b);
}
*/