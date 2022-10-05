#include "libft.h"
/*
Me van a pasar una cadena de caracteres
Cada uno de esos caracteres son los que hay que eliminar
El orden o el que estén juntos da igual.
Seek&Destroy!!
*/
/*char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*d;

	if (!s1)
		return (NULL);
	d = malloc(ft_strlen(s1) + 1);
	while (set[j] != '\0')
	{
		while (s1[i] != '\0')
		{
			if (s1[i] == set[j])
				ft_memmove(s1, i);//recortar == copiar el resto de la cadena en la posición donde está el caracter a elminar
		}
	}
	return (s1);
}*/

/*https://github.com/matteoolefloch/Libft_42/blob/master/ft_strtrim.c*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		size_s;
	char		*newstring;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size_s = ft_strlen(s1);
	while (size_s && ft_strchr(set, s1[size_s]))
		size_s--;
	newstring = ft_substr((char*)s1, 0, size_s + 1);
	return (newstring);
}