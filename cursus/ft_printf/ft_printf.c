/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparedes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 07:55:50 by mparedes          #+#    #+#             */
/*   Updated: 2023/03/24 07:55:53 by mparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	int val = 0;
	va_list ap;
	int i;

	va_start(ap, str);
   	for(i = 0; i < str; i++) {
		val += va_arg(ap, int);
   	}
   	va_end(ap);

	return val;
}
