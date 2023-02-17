/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparedes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 09:57:27 by mparedes          #+#    #+#             */
/*   Updated: 2022/09/15 09:57:28 by mparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H//include guard (https://en.wikipedia.org/wiki/Include_guard)
# define LIBFT_H

# include <stdlib.h>//pal malloc
# include <unistd.h>//pal write?????????????

int		ft_isalpha(int c);//falta quitar comentarios
int		ft_isdigit(int c);//comentarios
int		ft_isalnum(int c);//comentarios
int		ft_isascii(int c);//comentarios
int		ft_isprint(int c);//comentarios
size_t	ft_strlen(const char *str);//comentarios
void	*ft_memset(void *to, int ch, unsigned int n);//comentarios
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *to, const void *from, size_t n);//comentarios
void	*ft_memmove(void *to, const void *from, size_t n);//comentarios
size_t	ft_strlcpy(char *dest, const char *src, size_t size);//comentarios
size_t	ft_strlcat(char *dest, const char *src, size_t size);//comentarios
int	    ft_toupper(int c);
int	    ft_tolower(int c);
char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char *str, int c);
int	    ft_strncmp(const char *s1, const char *s2, size_t n);//comentarios
void    *ft_memchr(const void *s, int c, size_t n);//comentarios y movidas xD
int     ft_memcmp(const void *s1, const void *s2, size_t n);//comentarios y revisar xD
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int	    ft_atoi(const char *str);//repasar atoi porque no me da igual. Comentarios y main.
void    *ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

typedef struct 		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew_bonus(void *content);
#endif