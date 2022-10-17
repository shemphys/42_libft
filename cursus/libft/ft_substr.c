
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char 	*dest;

	i = 0;
	if (!s)
		return (NULL);
	if (len <= (size_t)ft_strlen(s))
		dest = malloc(sizeof(char) * (len + 1));
	else
		dest = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!dest)
		return (NULL);
	while (i < len && (size_t)start + i < ft_strlen(s))
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*cpy;
	size_t			i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	if (len <= (size_t)ft_strlen(s))
		cpy = (char *)malloc(sizeof(char) * (len + 1));
	else
		cpy = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!cpy)
		return (0);
	while (s[j] != '\0' && i < len)
	{
		if (j >= start)
			cpy[i++] = s[j];
		j++;
	}
	cpy[i] = '\0';
	return (cpy);
}*/

