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
/*
	s: La string a separar
	c: El carácter delimitador

	return: array de nuevas strings resultante de la separación
	NULL si falla la reserva de memoria
*/
//un doble puntero almacena punteros (o referencias)
/*
	1º contar el número de palabras (nº de referencias)
	2º crear un puntero por palabra
		- necesito un wordlen
	3º añadir cada puntero al doble puntero
*/
/*
size_t	ft_wordcount(char const *s, char c)//size of the **
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i + 1);
}

//start = char c position in s + 1
char	*ft_wordlen_returning_pointer(char const *s, char c, size_t start)// size of each word
{
	size_t	i;
	char	*a;

	i = 0;
	while (s[start + i] != '\0' && s[start + i] != c)
		i++;
	if (i = 0)
		return (ft_strdup(""));//para que devuelva una chisma vacía
	a = malloc(sizeof(char *) * (i + 1));
	if (!a)
		return (NULL);
	while (s[start + i] != '\0' && s[start + i] != c)
	{
		a[i] = s[start + i];
		i++;
	}
	a[i] = '\0';
	return (a);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**a;
	char	*word;

	i = 0;
	j = 0;
	a = malloc(sizeof(char **) * (ft_wordcount(s, c)));
	if (!a)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			word = ft_wordlen_returning_pointer(s, c, (i + 1));
			if (j != 0)
				j++;
		}
		a[j] = word;
	}
	return (a);
}
*/
//////////////////////////////////////////////////////////////////////////////////////

size_t	ft_wordcount(char const *s, char c)//size of the **
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i);
}

size_t	ft_wordlen(char const *s, char c)
{
	size_t	i;
	
	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

char	*ft_word(char const *s, char c)//le paso un puntero a la posición 0 de la palabra
{
	size_t	i;
	size_t	j;
	char	*word;

	i = 0;
	j = ft_wordlen(s, c);
	word = malloc(sizeof(char) * (ft_wordlen(s, c) + 1));
	if (!word)
		return (NULL);
	while (i < j)
	{
		word[i] = s[i];
		i++; 
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	x;
	char	**words;

	i = 0;
	x = ft_wordcount(s, c);
	if (x == 0)//es decir, si no hay coincidencias
		x = ft_strlen(s);
	words = malloc(sizeof(char *) * (x + 1));
	if (!words)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			words[i++] = ft_word(s, c);
		while (*s != c && *s)
			s++;
	}
	words[i] = 0;
	return (words);
}
