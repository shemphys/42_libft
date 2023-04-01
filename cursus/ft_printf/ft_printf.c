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

int	ft_printf(char const *str, ...)//primer argumento debe ser una cadena de caracteres
{
	/* NO HACE FALTA
	char	recoge_args;//tomará los valores de los argumentos según iteremos
	*/
	va_list archivo;//nodo tipo va_list donde recogeremos todos los argumentos
	int		x;

	x = 0;
	//creamos la lista enlazada
	va_start(archivo, str);

	while (!str)//el primer
	{
		if (str == '%' && !(str++ == 'c' || str++ == 's' || str++ == 'p' 
		|| str++ == 'i' || str++ == 'd' || str++ == 'u' || str++ == 'x' 
		|| str++ == 'X' || str++ == '%'))
			ft_error()
			ft_menu(str++);
		str++;
	}
	return (1);	//TIENE QUE DEVOLVER UN INT pero aún no sé qué int devolverá haha
				//¿quizás la suma de todos los caracteres?
				//Quizás haya que implementar un salto de línea al terminar de imprimir por pantalla.
				//ese \n también habrá que contabilizarlo como un caracter más. ¿No?
}
