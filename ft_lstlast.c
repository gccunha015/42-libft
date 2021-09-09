#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;
	t_list	*last;

	tmp = lst;
	last = tmp;
	while (tmp)
	{
		last = tmp;
		tmp = tmp->next;
	}
	return (last);
}
