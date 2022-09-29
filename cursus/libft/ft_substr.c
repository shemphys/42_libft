
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char 	*dest;
//char a[]="lorem ipsum dolor sit amet";
//char b[]="lorem ipsu";
//char c[] = "";
	i = 0;
	if (!s)//protegiendo el malloc
		return (NULL);
	dest = (char *)malloc(sizeof(char) * len);
	while (i < len && s[start + i] != '\0')
	{
		dest[i] = s[start + i];
		i++;
	}
	return (dest);
}