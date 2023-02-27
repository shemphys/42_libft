#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;//necesito un auxiliar que apunte

	if (*lst == NULL)
		*lst = new;
	else
	{
		ft_lstlast(*lst);

	}
}
/*
	Yo no sé qué va detrás del nodo new, puede quedar abierto y que haya metido una lista gigantesca
	es decir, que no pasa nada si no termina en NULL
	en null tienen que terminar las perfect C strings (o algo asín se llamaban jeje)
*/