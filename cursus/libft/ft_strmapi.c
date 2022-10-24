#include "libft.h"
/*
	s: La string que tiene que iterar
	f: La función a aplicar sobre cada carácter
	RETURN
	la string creada tras el correcto uso de 'f' sobre
	cada carácter.
	NULL si falla la reserva de memoria.
	DESCRIPTION
	A cada caracter de la string 's', aplica la
	función 'f' dando como parámetros el índice de
	cada carácter dentro de 's' y el propio carácter.
	Genera una nueva string con el resultado del uso
	sucesivo de 'f'
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*x;

	i = 0;
	if (!s || !f)
		return (NULL);
	x = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!x)
		return (NULL);
	while(s[i])
	{
		x[i] = f(i, s[i]);
		i++;
	}
	x[i] = '\0';
	return (x);
}