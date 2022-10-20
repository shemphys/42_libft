/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparedes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:13:56 by mparedes          #+#    #+#             */
/*   Updated: 2022/10/17 18:13:57 by mparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//PRO TIP
// el ** guarda la referencia de varios *
// en vez de ir guardando letra a letra como si fuese un array normal u.u
/* enunciado
	s: La string a separar
	c: El carácter delimitador

	return: array de nuevas strings resultante de la separación
	NULL si falla la reserva de memoria
	
	tip1: cambiar char c por un espacio, quedarían varias palabras
	tip2: un doble puntero implica que tiene 2 posiciones (entre otras cosas)
*/
/* objetivo: contar los char c en s, para dar tamaño al **puntero final 
	size_t contador_de_palabras = 0;
	while ()
		if (posición = char c)
			if (posición + 1 != '\0')
				contador_de_palabras++;
*/
/* Dar tamaño al **puntero

*/
/* introducir los valores en **puntero
	tip: no sé cómo va EN ABSOLUTO XD
*/

size_t	c_palabras(char const *s, char c)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] == c)
			if (s[a + 1] != '\0')
				i++;
		s++;
	}
	return (i + 1);//devuelve cuántos separadores habrá (+1 porque habrá una palabra más que separador)
}

size_t	wordlen(char const *s, char c)
{

}

char *palabras(char const *s, char c)
{
	size_t	i;
	char	*palabrita;

	i = 0;
	while (s)
	return ()
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**x;

	i = 0;
	if (!s)
		return (NULL);
	x = malloc(sizeof(char) * c_palabras(s, c));
	while (s[letra] != '\0')
	{
		if (s[letra] == c)
		{
			letra++;
			x[palabra][letra] = '\0';
			palabra++;
			if (s[letra] == '\0')
			{
				x[palabra][letra] = '\0';
				return (x);
			}
		}
		x[palabra][letra] = s[letra];
		s++;
	}
	return (x);
}
