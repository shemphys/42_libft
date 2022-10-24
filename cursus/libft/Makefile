NAME = libft.a

CC = gcc
CFLAGS = -Werror -Wall -Wextra
RM = rm -rf

SRC = ft_atoi.c\
			ft_strncmp.c\
			ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_strlen.c\
			ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_strnstr.c\
			ft_calloc.c\
			ft_strdup.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_split.c\
			ft_itoa.c

OBJS = $(SRC:.c=.o)

all: $(NAME)#aquí podría poner libft.a y quitar la variable NAME

$(NAME): $(OBJS)
	ar crs $(NAME) $(OBJS)

clean:#solo borra los .o
	$(RM) $(OBJS)

fclean: clean#borra todo, incluido el libft.a
	$(RM) $(NAME)

re: clean all

.PHONY: all re clean fclean