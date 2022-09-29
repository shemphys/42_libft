
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char 	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * len);
	if (!dest)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		dest[i] = s[start + i];
		i++;
	}
	return (dest);
}