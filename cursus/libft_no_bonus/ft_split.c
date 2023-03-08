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
//me dice cuántas palabras tengo
size_t	ft_wordcount(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			i++;
		while (*s && *s != c)
			s++;
	}
	return (i);
}
//mide el tamaño de la palabra que estemos revisando en ese momento
size_t	ft_wordlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}
//crea un puntero que apunta a una dirección de memoria creada a medida para la palabra en cuestión
char	*ft_word(char const *s, char c)
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
//creo un puntero con espacios de memoria reservados para tantos punteros como palabras tenga. Termina en un puntero nulo.
char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**words;

	i = 0;
	if (!s)
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!words)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			words[i++] = ft_word(s, c);//tengo apuntada cada palabra por un puntero que apunta al char array
		while (*s != c && *s)
			s++;
	}
	words[i] = NULL;
	return (words);
}
/*
	size of the **
	le paso un puntero a la posición 0 de la palabra
*/