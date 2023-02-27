#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (!lst)
	{
		f(lst);
		lst = lst->next;
	}
}
/*
	He visto a compañeros que aquí usan un aux y trabajan sobre ella
	no sé por qué no iba a trabajar sobre la propia lista...
*/