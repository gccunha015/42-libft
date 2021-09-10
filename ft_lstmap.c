#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*new_list;
	t_list	*new_element;

	ptr = lst;
	new_list = NULL;
	while (ptr)
	{
		new_element = ft_lstnew((*f)(ptr->content));
		if (!new_element)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_element);
		ptr = ptr->next;
	}
	return (new_list);
}
