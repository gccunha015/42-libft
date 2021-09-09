#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	next = *lst;
	while (next)
	{
		next = next->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
	lst = NULL;
}
